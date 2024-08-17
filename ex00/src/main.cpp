/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:06:40 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/17 09:51:34 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int	main(void)
{
	Zombie	*z;

	z = newZombie("Uxue");
	z->announce();
	randomChump("Nerewis");
	delete z;
}

/*------------------------- cpp_01/ex00 PROJECT ------------------------------*
*	General info about cpp_01: The main objective of the proposed exercises is
*	to get introduced to OOP (Object Oriented Programming) through C++.
*
*	Particular info about cpp_01/ex00 subject: ex00 is one of the several
*	exercises in cpp_01 module.
*		
*		cpp_01/ex00 requirements' summary:
*			- Implement a Zombie class: must contain a string private
*			attribute 'name'.
*
*		Objective of the ex00:
*			- Instance Zombie class in 2 different ways: in heap and in stack.
*
*	How are we doing it on the project?
*		· Function 1 will allocate Zombie in HEAP
*			Zombie* newZombie( std::string name );
*
*				TL;DR new/delete is like malloc/free
*					
*
*		· Function 2 will allocate Zombie in STACK
*			void randomChump( std::string name );
*-----------------------------------------------------------------------------*/


/* CONCEPTS 
*
*	Memory is a finite resource in our computer systems, not unlimited.
*
*	In C and C++ we have a little control over how this memory is used and how data
*	is allocated.
*
*	STACK vs. HEAP memory:
*		- STACK: reserved place of memory for our functions to execute and store data.
*				 Allocation is automatically managed by compiler.
*			· E.g.: local variables (exist within function in which they were declared)
*					int x = 4;
*
*		- HEAP: large storage, long-lived memory. 
*				We as users must manage memory manually (malloc, calloc, free).
*
*	Main learning on cpp_01/ex00:
*		1) Which is the difference between allocating objects on the stack vs. the 
*		heap in C++?
*		2) When is it appropriate to use each type of allocation?
*
*	Conclusions:___________________________________________________
*		1) Function 1 returns a pointer to a Zombie object: HEAP
*								Zombie* newZombie(std::string name);
*
*		> Heap Allocation ('newZombie'): appropriate when we need to return a pointer
*										 to an object, allowing the caller to manage
*										 the object's lifetime. This fits with returning
*										 a 'Zombie *' pointer.
*
*		2) Function 2 has no return value: STACK
*								void randomChump(std::string name);
*
*		> Stack Allocation ('randomChump'): suitable for creating objects that are only
*											needed temporarily within a function. Since
*											'randomChump' does not return a value, there's
*											no need for heap allocation.
*-----------------------------------------------------------------------------*/

/* Resources:
*	1. Fundamental Concepts of Object Oriented Programming:
*	https://www.youtube.com/watch?v=m_MQYyJpIjg
*
*	2. Reference projects:
*	https://github.com/madebypixel02/CPP-Module-01/blob/main/ex00/Zombie.hpp
*
*	3. Your Third Day in C (Understanding stack and heap memory) -
*	Crash Course in C Programming: https://www.youtube.com/watch?v=sXFVaRtobYU
*-----------------------------------------------------------------------------*/