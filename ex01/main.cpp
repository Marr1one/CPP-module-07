/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotab[]roo{@student.}2.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 23:36:43 by root              #+#    #+#             */
/*   Updated: 2025/10/27 23:48:47 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

// void printInt(int n)
// {
// 	std::cout << n << std::endl;
// }

// void multbyTwo(int &n)
// {
// 	n  = n * 2;
// }

// int main ()
// {
// 	int tab[] = {1,2,3,4,5};
// 	iter(tab, 5, multbyTwo);
// 	iter(tab, 5, printInt);
// }

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get_n( void ) const { return this->_n; }
	private:
		int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get_n(); return o; }

template< typename T >

void print( T const & x ) {std::cout << x << std::endl;}

int main() 
{
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	iter( tab, 5, print);
	iter( tab2, 5, print);
	return 0;
}