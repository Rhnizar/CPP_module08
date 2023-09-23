/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:43:54 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/23 12:18:02 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <vector>
#include <iterator>

template <typename T>

typename T::iterator	easyfind(T firstOne, int secondOne)
{
	typename T::iterator it = std::find(firstOne.begin(), firstOne.end(), secondOne);
	if (it != firstOne.end())
		return it;
	else
		throw std::runtime_error("element not found !!");
}

int main()
{
	std::vector<int> nums;
	nums.push_back(10);
	nums.push_back(20);
	nums.push_back(30);
	nums.push_back(40);
	nums.push_back(50);
	// std::vector<int>::iterator it = nums.begin(); 
	std::cout << *easyfind(nums, 200);
	// std::cout << *(it + 1) << std::endl;
	// for(size_t i=0; i<nums.size(); i++)
	// {
	// 	if (nums.at(i) == 100)
	// 		std::cout << nums.at(i) << std::endl;
	// 	else
	// 		std::cout << "error" << std::endl;
	// }
	return 0;
}




// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <list>
// #include <stdexcept>

// template <typename T>
// typename T::iterator easyfind(T& container, int value) {
//     auto it = std::find(container.begin(), container.end(), value);
//     if (it != container.end()) {
//         return it;
//     } else {
//         // You can choose to throw an exception or return an error value here.
//         throw std::runtime_error("Value not found in container");
//     }
// }

// int main() {
//     std::vector<int> vec = {1, 2, 3, 4, 5};
//     std::list<int> lst = {10, 20, 30, 40, 50};

//     try {
//         // Test with a value that exists in the container
//         auto result1 = easyfind(vec, 3);
//         std::cout << "Found: " << *result1 << std::endl;

//         // Test with a value that does not exist in the container
//         auto result2 = easyfind(lst, 15);
//         std::cout << "Found: " << *result2 << std::endl; // This line should not be reached
//     } catch (const std::runtime_error& e) {
//         std::cerr << "Error: " << e.what() << std::endl;
//     }

//     return 0;
// }