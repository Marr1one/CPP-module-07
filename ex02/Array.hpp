/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 00:16:27 by root              #+#    #+#             */
/*   Updated: 2026/02/06 15:52:43 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

template <typename T>
class Array 
{
	private:
		T *_array;
		size_t _size;
	public:
		Array() : _array(NULL), _size(0){};
		Array(unsigned int n) : _size(n)
		{
			_array = new T[n];
		};
		~Array(){delete[] _array;};
		Array(const Array &other)  : _size(other._size)
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
		Array &operator=(const Array &other)
		{
			if (this != &other)
			{
				delete[] this->_array; 
				_size = other._size;
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
		const T &operator[](int index) const 
		{
			if (index > _size)
				throw std::runtime_error("Index out of bounds !\n");
			return _array[index];
		};
		size_t size() const {return _size;};
};

