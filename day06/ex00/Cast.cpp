/*
 * ===================================================================
 *
 *       Filename:  Cast.cpp
 *
 *        Version:  1.0
 *        Created:  21.06.2021 09:30:15
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Cast.hpp"

Cast::Cast(void) : _fvalue(0)
{}

Cast::Cast(const char *svalue) :_fvalue(std::atof(svalue))
{}

Cast::Cast(Cast const & obj) : _fvalue(obj.toFloat())
{}

Cast::~Cast(void)
{}

Cast & Cast::operator=(Cast const & obj)
{
	if (this == &obj)
		return *this;
	this->_fvalue = obj.toFloat();
	return *this;
}

int Cast::toInt(void) const
{
	if (isnan(this->_fvalue) || isinf(this->_fvalue))
		throw Cast::ImpossibleCast();
	return static_cast<int>(this->_fvalue);
}

char Cast::toChar(void) const
{
	if (isnan(this->_fvalue) || isinf(this->_fvalue))
		throw Cast::ImpossibleCast();
	if (static_cast<char>(this->_fvalue) <= 32 || 
			static_cast<char>(this->_fvalue) >= 127)
		throw Cast::NonDisplayable();
	return static_cast<char>(this->_fvalue);
}

double Cast::toDouble(void) const
{
	return static_cast<double>(this->_fvalue);
}

float Cast::toFloat(void) const
{
	return this->_fvalue;
}

const char* Cast::NonDisplayable::what(void) const throw()
{
	return "Non displayable";
}

const char* Cast::ImpossibleCast::what(void) const throw()
{
	return "impossible";
}
