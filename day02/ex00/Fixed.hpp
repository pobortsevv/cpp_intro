/*
 * ===================================================================
 *
 *       Filename:  Fixed.hpp
 *
 *    Description: Just my first canonical class 
 *
 *        Version:  1.0
 *        Created:  06.06.2021 14:28:05
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int _point;
		static const int _fractBits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const & obj);
		~Fixed(void);

		Fixed & operator=(Fixed const & obj);

		int getRawBits(void) const;
		void setRawBits(int const raw);

};

#endif

