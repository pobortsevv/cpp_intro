/*
 * ===================================================================
 *
 *       Filename:  mutantstack.hpp
 *
 *        Version:  1.0
 *        Created:  23.06.2021 01:18:34
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <algorithm>
# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	/*-----------------------------------------------------------------------------
	 * stack has private field container_type c ( a.k.a template _Container = deque
	 * by default)  
	 *-----------------------------------------------------------------------------*/
	public:
		MutantStack(void) : std::stack<T>() {}
		MutantStack(MutantStack<T> const & obj) : std::stack<T>(obj) {}
		~MutantStack(void) {}
		
		MutantStack<T>  &operator=(MutantStack<T> const & obj)
		{
			if (this == &obj)
				return *this;
			this->c = obj.c;
			return *this;
		}

		/*-----------------------------------------------------------------------------
		 * By default container_type (this is how realised) stack in stack definition
		 * is deque which already has iterators :)
		 *-----------------------------------------------------------------------------*/

		typedef typename std::stack<T>::container_type::iterator                   iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator           reverse_iterator;

		iterator begin(void)
		{
			return this->c.begin();
		}
		iterator end(void)
		{
			return this->c.end();
		}
		reverse_iterator rbegin(void)
		{
			return this->c.rbegin();
		}
		reverse_iterator rend(void)
		{
			return this->c.rend();
		}
};

#endif

