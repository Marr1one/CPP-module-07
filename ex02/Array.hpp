/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 00:16:27 by root              #+#    #+#             */
/*   Updated: 2025/10/28 17:23:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

template <typename T>
class Array 
{
	public:
		Array() : _array(NULL), _size(0){};
		Array(unsigned int n) : _size(n)
		{
			_array = new T[n];
		};
		Array(Array &other)  : _size(other._size)
		{
			if (_size == 0)
				_array = NULL;
			else
			{
				_array = new T[_size];
				for (size_t i = 0; i < _size ; i++)
					_array[i] = other._array[i];
			}
		};
		~Array(){delete[] _array;};
		Array &operator=(Array &other)
		{
			if (this != &other)
			{
				delete[] _array;
				this->size = other._size;
				if (_size == 0)
					_array = NULL;
				else 
				{
					_array = new T[_size];
					for (size_t i = 0;  i < _size; i++)
						_array[i] = other._array[i];
				}
			}
			return *this;
		};
		T &operator[](int index)
		{
			if (index > _size)
				throw std::runtime_error("Index out of bounds !\n");
			return _array[index];
		};
		size_t size() const {return _size;};
	private:
		T *_array;
		size_t _size;
};

