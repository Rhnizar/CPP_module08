/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:07:34 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/20 15:49:17 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

int main()
{
	try
	{
		size_t i;
		std::vector<int> nums;
		/*add element in vector*/
		nums.push_back(1);
		nums.push_back(2);
		nums.push_back(3);
		std::cout << "size = " << nums.size() << std::endl;
		// /*===================*/
		// /*print size the vector */
		/*delete element from vector*/
		// nums.pop_back();
		// nums.pop_back();
		// nums.pop_back();
		// nums.pop_back();
		// std::cout << "size = " << nums.size() << std::endl;
			std::cout << "==> " << nums.max_size() << std::endl;
		for(i=0; i<nums.size(); i++)
			std::cout << nums.at(i) << std::endl;
			// std::cout << nums.at(i) << std::endl;
		std::cout << nums[i] << std::endl;
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return 0;
}