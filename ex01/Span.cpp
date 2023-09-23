/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:47:14 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/23 20:09:30 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():N(0)
{
	numbers.reserve(N);
}

Span::Span(unsigned int n)
{
	N = n;
	numbers.reserve(N);
}

Span::Span(const Span& otherSpan)
{
	*this = otherSpan;
}

Span& Span::operator=(const Span& otherSpan)
{
	if (this != &otherSpan)
	{
		this->N = otherSpan.N;
	}
	return *this;
}


Span::~Span()
{}


/*functions to implement */


void	Span::addNumber(unsigned int n)
{
	if (N > numbers.size())
		numbers.push_back(n);
	else
		throw std::runtime_error("container is full !!");
}

int	Span::shortestSpan()
{
	int	minSpan;
	if(numbers.size() < 2)
		throw std::runtime_error("not enough numbers to calculate distance");
	
	std::sort(numbers.begin(), numbers.end());
	minSpan = numbers.at(1) - numbers.at(0);
	for (size_t i = 2; i < numbers.size(); ++i) 
	{
        int tmp = numbers[i] - numbers[i - 1];
        if (tmp < minSpan)
            minSpan = tmp;
    }
	return minSpan;
}

int	Span::longestSpan()
{
	int	maxSpan;
	if(numbers.size() < 2)
		throw std::runtime_error("not enough numbers to calculate distance");
	std::sort(numbers.begin(), numbers.end());
	maxSpan = numbers.at(numbers.size() - 1) - numbers.at(0);

	return maxSpan;
}
