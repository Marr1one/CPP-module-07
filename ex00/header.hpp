/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 03:17:13 by root              #+#    #+#             */
/*   Updated: 2025/10/26 03:27:25 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T> void swap(T &x, T &y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

template <typename T> T min(T x, T y)
{
	if (x < y)
		return (x);
	else if (x > y)
		return (y);
	else return (y);
}

template <typename T> T max(T x, T y)
{
	if (x < y)
		return (y);
	else if (x > y)
		return (x);
	else return (y);
}