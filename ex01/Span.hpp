/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:46:31 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/23 20:37:17 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm> // I include this header for use std::sort

class Span
{
	private:
		unsigned int N;
		std::vector<int> numbers;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& otherSpan);
		Span& operator=(const Span& otherSpan);
		~Span();
		
		void	addNumber(unsigned int n);
		int		shortestSpan();
		int		longestSpan();
};



#endif