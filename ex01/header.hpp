/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 23:37:21 by root              #+#    #+#             */
/*   Updated: 2025/10/27 23:50:01 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename F>
void iter(T *tab, size_t length, F func)
{
	size_t i = 0;
	while (i < length)
	{
		func(tab[i]);
		i++;
	}
}

