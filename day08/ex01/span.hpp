/*
 * ===================================================================
 *
 *       Filename:  span.hpp
 *
 *        Version:  1.0
 *        Created:  06/22/2021 17:58:17
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <cstdlib>

class Span
{
	private:
		unsigned int _max_size;
		std::vector<int> _arr;
	
	public:
		Span(void);
		Span(unsigned int size);
		Span(Span const & obj);
		~Span(void);
		
		Span const & operator=(Span const& obj);
		unsigned int _size(void) const;
		unsigned int max_size(void) const;

		void addNumber(int number);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan(void) const;
		int longestSpan(void) const;

		int operator[](int index) const;

		class FullArr: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class NoSpanToFind: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif

