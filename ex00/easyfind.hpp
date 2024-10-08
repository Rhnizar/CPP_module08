/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:18:35 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/23 20:37:12 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <stack>
#include <iterator>
#include <list>
#include <algorithm>// I include this header for use  std::find 

template <typename T>

typename T::iterator	easyfind(T& firstOne, int secondOne)
{
	typename T::iterator it = std::find(firstOne.begin(), firstOne.end(), secondOne);

	if (it != firstOne.end())
		return it;
	else
		throw std::runtime_error("element not found !!");
}

#endif