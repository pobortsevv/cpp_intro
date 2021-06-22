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

class Span
{
	private:
		unsigned int _size;
		std::vector<int> _arr;
	
	public:
		Span(void);
		Span(unsigned int size);
		Span(Span const & obj);
		~Span(void);
		
		Span const & operator=(Span const& obj);
		unsigned int size(void) const;

		void addNumber(int number);
		void shortestSpan(void) const;
		void longestSpan(void) const;

		int &operator[](int index) const;

		class FullArr: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif

