/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:18:32 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/23 13:09:23 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	try
	{
		/*test whith vector container.*/
			std::vector<int> container;
		/*test whith list container.*/
			// std::list<int> container;
		container.push_back(10);
		container.push_back(20);
		container.push_back(30);
		container.push_back(40);
		container.push_back(50);
		std::cout << *easyfind(container, 20);
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return 0;
}
