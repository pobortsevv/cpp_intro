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
	this->_size = obj._size();
	this->_count = obj.max_size();

	return *this;
}

int& Span::operator[](int index) const 
{
	if (index < 0 && static_cast<unsigned int>(index) > this->_count)
		throw std::out_of_range("Out of array range!");
	return this->_arr[index];
}

unsigned int Span::size(void) const
{
	return this->_size;
}

unsigned int Span::count(void) const
{
	return this->_count;
}

void Span::addNumber(int number)
{
	if (this->_count == this->_size)
		throw Span::FullArr();
	int *tmp = new int[this->_size]();
	for (int i = 0; i < this->_count; i++)
		tmp[i] = this->_arr[i];
	tmp[i] = number;
	this->_count++;
	if (this->_arr != nullptr)
		delete [] this->_arr;
	this->_arr = tmp;
}

const char *Span::FullArr::what(void) const throw()
{
	return "Storage of Span object is full!"
}

void Span::shortestSpan(void) const
{
	
}
