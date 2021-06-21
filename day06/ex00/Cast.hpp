/*
 * ===================================================================
 *
 *       Filename:  Cast.hpp
 *
 *        Version:  1.0
 *        Created:  21.06.2021 09:05:06
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef CAST_HPP
# define CAST_HPP

# include <iostream>
# include <string>
# include <exception>
# include <math.h>

class Cast
{
	private:
		float _fvalue;

	public:
		Cast(void);
		Cast(const char *svalue);
		Cast(Cast const & obj);
		~Cast(void);

		Cast & operator=(Cast const & obj);

		int toInt(void) const;
		char toChar(void) const;
		float toFloat(void) const;
		double toDouble(void) const;

		class NonDisplayable: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class ImpossibleCast: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif

