/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 00:16:27 by root              #+#    #+#             */
/*   Updated: 2025/10/28 03:15:09 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

template <typename T>
class Array 
{
	public:
		Array();
		Array(unsgined int n);
		Array(Array &other)
		Array &operator=(Array &other);
		size_t size() const;
	private:
		T *_array;
};

template <typename T>
Array<T>::Array() : _array(NULL)
{}
