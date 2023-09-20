/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:18:35 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/20 10:40:37 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template <typename T>

T	easyfind(T firstOne, int secondOne)
{
	if (firstOne == secondOne)
		return 	firstOne;
	else
		throw std::out_of_range("this member not in container !!");
	return 0;
}
#endif