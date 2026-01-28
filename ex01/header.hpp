/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 23:37:21 by root              #+#    #+#             */
/*   Updated: 2025/12/10 16:17:02 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void iter(T *tab, size_t length, void (*func)(T const &))
{
	size_t i = 0;
	while (i < length)
	{
		func(tab[i]);
		i++;
	}
}

