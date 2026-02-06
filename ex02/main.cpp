/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissat <maissat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 03:06:41 by root              #+#    #+#             */
/*   Updated: 2026/02/06 15:52:42 by maissat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

class Test
{
	private :
		int n;
	public:
		Test() : n(42){}
		int get_n()
		{
			return (this->n);	
		}
};

std::ostream &operator<<(std::ostream &out, Test &t)
{
	out << t.get_n() << std::endl;
	return out;
}

//int main()
//{
//    try
//    {

		
//		Array<int> empty;
//        Array<int> b(4);

//        b[0] = 10;
//        b[1] = 20;
//        b[2] = 30;
//        b[3] = 40;

//        for (size_t i = 0; i < 4; i++)
//            std::cout << "b[" << i << "] = " << b[i] << std::endl;

//		Array<int> d = b;
//        std::cout << "test de la methode size => " << b.size() << std::endl;
//		std::cout << "test de d copie avec l'operateur = de b\n";
//		for (size_t i = 0; i < d.size(); i++)
//            std::cout << "d[" << i << "] = " << d[i] << std::endl;
//        // test avec un empty;
//        std::cout << "test empty\n";
//        for (size_t i = 0; i < empty.size(); i++)
//            std::cout << "empty[" << i << "] = " << empty[i] << std::endl;
//        std::cout << "fin du test empty\n";
			
//        Array<int> c(b);
//		c[0] = 100;
//        std::cout << "Après modification de c:" << std::endl;
//        std::cout << "b[0] = " << b[0] << std::endl;
//        std::cout << "c[0] = " << c[0] << std::endl;
//		std::cout << "Test out of bounds" << std::endl;
//		std::cout << b[10] << std::endl;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << "Exception attrapée: " << e.what();
//    }
//	try
//	{
//		std::cout << "------- TEST ARRAY TYPE COMPLEXE --------" << std::endl;
//		Array<Test> t(5);
//		for(int i = 0 ; i < 5; i ++)
//			std::cout << "t[" << i << "] => " << t[i];
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
	

//    return 0;
//}

int main()
{
	std::cout << "INT TEST " << std::endl;

	Array<int> empty;
	Array<int> b(4);

	b[0] = 10;
	b[1] = 20;
	b[2] = 30;
	b[3] = 40;

	for (int i = 0; i < b.size(); i++)
		std::cout << "b[" << i << "] = " << b[i] << std::endl;

	std::cout << "COPY CONSTRUCTOR " << std::endl;

	Array<int> c(b);
	c[0] = 100;

	std::cout << "b[0] = " << b[0] << std::endl;
	std::cout << "c[0] = " << c[0] << std::endl;

	std::cout << "OPERATOR= " << std::endl;

	Array<int> d;
	d = b;

	for (int i = 0; i < d.size(); i++)
		std::cout << "d[" << i << "] = " << d[i] << std::endl;

	std::cout << "EMPTY ARRAY " << std::endl;

	std::cout << "empty size = " << empty.size() << std::endl;

	std::cout << "CONST ARRAY " << std::endl;

	const Array<int> const_arr(3);
	for (int i = 0; i < const_arr.size(); i++)
		std::cout << const_arr[i] << std::endl;

	std::cout << "OUT OF BOUNDS " << std::endl;

	try
	{
		std::cout << b[42] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception attrapée: " << e.what() << std::endl;
	}

	std::cout << "COMPLEX TYPE TEST " << std::endl;

	Array<Test> t(5);
	for (int i = 0; i < t.size(); i++)
		std::cout << "t[" << i << "] = " << t[i] << std::endl;

	std::cout << "STRING TEST " << std::endl;

	Array<std::string> s(3);
	s[0] = "Hello";
	s[1] = "42";
	s[2] = "Paris";

	for (int i = 0; i < s.size(); i++)
		std::cout << s[i] << std::endl;
	return 0;
}