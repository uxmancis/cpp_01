/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:36:12 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/17 10:17:46 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{}

Weapon::~Weapon(void)
{}


/*  Best practice for getters: 
*
*   'const' at the end means it's a 'const' member function. It
*   guarantees that it'll not modify any member variable of the class.
*   It's considered a best practice for getters, as it clearly
*   communicatess the intention of calling the function won't 
*   change the state of the object. ---------------------------------*/
const std::string& Weapon::getType(void) const
{
    return(this->_type);
}

void Weapon::setType(std::string new_type)
{
    this->_type = new_type;
}