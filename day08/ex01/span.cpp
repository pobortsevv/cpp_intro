/*
 * ===================================================================
 *
 *       Filename:  span.cpp
 *
 *        Version:  1.0
 *        Created:  06/22/2021 20:49:44
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "span.hpp"

Span::Span(unsigned int size) : _max_size(size)
{}

Span::Span(Span const & obj) : _max_size(obj.max_size())
{
	for (unsigned int i = 0; i < obj._size(); i++)
		this->_arr.push_back(obj[i]);
}

Span::~Span(void)
{}

Span const & Span::operator=(Span const & obj)
{
	if (this == &obj)
		return *this;
	for (unsigned int i = 0; i < obj._size(); i++)
		this->_arr[i] = obj[i];
	this->_max_size = obj.max_size();

	return *this;
}

int Span::operator[](int index) const 
{
	if (index < 0 && static_cast<unsigned int>(index) > this->_arr.size())
		throw std::out_of_range("Out of array range!");
	return this->_arr[index];
}

unsigned int Span::_size(void) const
{
	return this->_arr.size();
}

unsigned int Span::max_size(void) const
{
	return this->_max_size;
}

void Span::addNumber(int number)
{
	if (this->_arr.size() == this->_max_size)
		throw Span::FullArr();
	this->_arr.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator begin,
		std::vector<int>::iterator end)
{
	if (this->_arr.size() == this->_max_size)
		throw Span::FullArr();
	for (unsigned int i = this->_arr.size(); i != this->_max_size && begin != end; i++)
	{
		this->_arr.push_back(*begin);
		begin++;
	}
}

const char *Span::FullArr::what(void) const throw()
{
	return "Storage of Span object is full!";
}

int Span::shortestSpan(void) const
{
	if (this->_arr.size() < 2)
		throw Span::NoSpanToFind();

	std::vector<int> tmp = this->_arr;
	std::vector<int>::iterator it;
	int shortest_diff;

	std::sort(tmp.begin(), tmp.end());
	it = tmp.begin();
	shortest_diff = abs(*(it + 1) - *it);
	for(;(it + 1) != tmp.end(); it++)
		shortest_diff = abs(*(it + 1) - *it) < shortest_diff ? abs(*(it + 1) - *it) : shortest_diff;
	return shortest_diff;
}

int Span::longestSpan(void) const
{
	if (this->_arr.size() < 2)
		throw Span::NoSpanToFind();

	std::vector<int> tmp = this->_arr;
	std::vector<int>::iterator it;
	std::vector<int>::reverse_iterator rit;
	int longest_diff;

	std::sort(tmp.begin(), tmp.end());
	it = tmp.begin();
	rit = tmp.rbegin();
	longest_diff = abs(*it - *rit);
	for (; it != tmp.end() || rit != tmp.rend(); it++)
	{
		longest_diff = abs(*it - *rit) > longest_diff ? abs(*it - *rit) : longest_diff;
		rit++;
	}
	return longest_diff;
}

const char *Span::NoSpanToFind::what(void) const throw()
{
	return "No span to find!";
}
