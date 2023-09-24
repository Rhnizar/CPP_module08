/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:41:20 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/24 12:13:26 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <iostream>
#include <stack>

template <typename T, class container=std::deque<T> >

class MutantStack : public std::stack<T>
{
	public:
		MutantStack(){}
		MutantStack(MutantStack& otherMutantStack)
		{
			*this = otherMutantStack;
		}
		MutantStack& operator=(MutantStack& otherMutantStack)
		{
			if (this != &otherMutantStack)
			{
				
			}
			return *this;
		}
		~MutantStack(){}
		typedef typename container::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
};

#endif