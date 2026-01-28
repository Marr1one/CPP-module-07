/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 03:17:13 by root              #+#    #+#             */
/*   Updated: 2026/01/27 15:26:51 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T &x, T &y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

template <typename T>
T min(T x, T y)
{
	if (x < y) return (x);
	return (y);
}

template <typename T>
T max(T x, T y)
{
	if (x > y) return (x);
	return (y);
}