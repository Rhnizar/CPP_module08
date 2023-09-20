/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:47:14 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/20 12:37:09 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{}

Span::Span(unsigned int n)
{
	N = n;
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
	if (N == n)
		throw std::out_of_range("this number already exist !!");
}
