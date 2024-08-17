/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:07:45 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/17 09:55:29 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

void test (int test_nb, int number_of_zombies, Zombie *horde)
{
	int i;

	i = 0;
	std::cout << "\n\n----------------- Test nb. " AQUAMARINE << test_nb << RESET_COLOR "-----------------" << std::endl; 
	horde = zombieHorde(number_of_zombies, "z_Nerewis");
	i = 0;
	while (number_of_zombies > 0)
	{
		horde[i].announce();
		i++;
		number_of_zombies--;
	}
	delete[]horde;
}

/*About cpp_01/ex01:
*
*	Allocate N Zombie objects in 1 allocation.
*/
int main(void)
{
    int number_of_zombies;
	int i;
	int nb_of_test;
	Zombie *horde;

	/*Feel free to add as many tests entering the following parameters:
			test(test_nb, number_of_zombies, horde)
	--------------------------------------------------------------------*/
	test(1, 1, horde);
	test(2, 5, horde);
	test(3, 10, horde);
}

/*
*	Encapsulation: hiding unnecessary data from outside a class
*
*	getter: function that makes a private attribute READABLE
*	setter: function that makes a private attribute WRITEABLE
*	//when attributes are private
*
*	C++ GETTERS & SETTERS explained easy: https://www.youtube.com/watch?v=5_GQw06deQg 
*/