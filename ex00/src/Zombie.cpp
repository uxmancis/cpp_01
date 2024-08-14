/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:06:05 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/14 19:04:37 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

/*  Zombie Class' Constructor
*
*       A constructor is a special member function that is automatically
*       called when an object of the class is created.
*
*       this: pointer to current object
*/
Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << GREEN "Zombie object " << this->_name << " created" RESET_COLOR << std::endl;
}

/*  Zombie Class' Destructor
*
*       A destructor is a special member function that is automatically
*       called when an object of the class is destroyed.
*       
*       this: pointer to current object
*/
Zombie::~Zombie()
{
    std::cout << RED "Zombie object " << this->_name << " destroyed" RESET_COLOR << std::endl;
}

void    Zombie::announce()
{
    std::cout << AQUAMARINE << this->_name << " BraiiiiiiinnnzzzZ..." RESET_COLOR << std::endl;
}