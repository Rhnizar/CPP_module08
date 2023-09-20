/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:46:31 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/20 12:39:00 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span
{
	private:
		unsigned int N;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& otherSpan);
		Span& operator=(const Span& otherSpan);
		~Span();

		void	 addNumber(unsigned int n);
		void	shortestSpan();
		void	longestSpan();
};



#endif