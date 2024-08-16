/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:36:03 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/15 14:10:42 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(NULL)
{
    this->_weapon = NULL;
    std::cout << AQUAMARINE << this->_name << " HumanB object created." RESET_COLOR << std::endl; 
}

HumanB::~HumanB(void)
{
    std::cout << AQUAMARINE << this->_name << " HumanB object destroyed." RESET_COLOR << std::endl;
}

void HumanB::attack(void)
{
    if (this->_weapon)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << "attacks without weapons" << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
    this->_weapon = &newWeapon;
    std::cout << AQUAMARINE "Weapon in " << this->_name << " set to " << _weapon->getType() << "." RESET_COLOR << std::endl;
}