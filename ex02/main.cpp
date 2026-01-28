/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marwan <marwan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 03:06:41 by root              #+#    #+#             */
/*   Updated: 2026/01/28 12:04:47 by marwan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Array.hpp"

int main()
{
    try
    {
		Array<int> empty;
        Array<int> b(4);

        b[0] = 10;
        b[1] = 20;
        b[2] = 30;
        b[3] = 40;

        for (size_t i = 0; i < 4; i++)
            std::cout << "b[" << i << "] = " << b[i] << std::endl;

        Array<int> c(b);
		Array<int> d = b;
        std::cout << "test de la methode size => " << b.size() << std::endl;
		std::cout << "test de d copie avec l'operateur = de b\n";
		for (size_t i = 0; i < d.size(); i++)
            std::cout << "d[" << i << "] = " << d[i] << std::endl;
        // test avec un empty;
        std::cout << "test empty\n";
        for (size_t i = 0; i < empty.size(); i++)
            std::cout << "empty[" << i << "] = " << empty[i] << std::endl;
        std::cout << "fin du test empty\n";

        // fin du test empty!
			
		c[0] = 100;
        std::cout << "Après modification de c:" << std::endl;
        std::cout << "b[0] = " << b[0] << std::endl;
        std::cout << "c[0] = " << c[0] << std::endl;

        
        std::cout << b[10] << std::endl; //test de l'exception

    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception attrapée: " << e.what();
    }

    return 0;
}
