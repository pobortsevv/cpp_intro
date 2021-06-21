/*
 * ===================================================================
 *
 *       Filename:  Array.hpp
 *
 *        Version:  1.0
 *        Created:  21.06.2021 19:22:26
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>
class Array
{
	private:
		T *_arr;
		unsigned int _size;
	
	public:
		Array(void) : _arr(nullptr), _size(0) {}
		Array(unsigned int len) : _size(len)
		{
			this->_arr = new T[len]();
		}
		Array(Array const & obj) : _size(obj.size())
		{
			this->_arr = new T[obj.size()];
			for (unsigned int i = 0; i < obj.size(); i++)
				this->_arr[i] = obj[i];
		}
		~Array(void)
		{
			if (this->_arr != nullptr)
				delete [] this->_arr;
		}
		Array const & operator=(Array const & obj)
		{
			if (this == &obj)
				return *this;
			if (this->_arr != nullptr)
				delete [] this->_arr;
			this->_arr = new T[obj.size()];
			for (unsigned int i = 0; i < obj.size(); i++)
				this->_arr[i] = obj[i];
			this->_size = obj.size();
			return *this;
		}
		T& operator[](int index) const
		{
			if (index < 0 && static_cast<unsigned int>(index) > this->_size)
				throw std::out_of_range("Out of array range!");
			return this->_arr[index];
		}
		unsigned int size(void) const
		{
			return this->_size;
		}
};

#endif
