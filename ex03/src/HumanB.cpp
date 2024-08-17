/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:36:03 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/17 13:23:54 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
    std::cout << BLUE << this->_name << RESET_COLOR " named HumanB object " GREEN "created." RESET_COLOR << std::endl; 
}

HumanB::~HumanB(void)
{
    std::cout << BLUE << this->_name << RESET_COLOR " named HumanB object " RED "destroyed." RESET_COLOR << std::endl;
}

void HumanB::attack(void)
{
    if (this->_weapon)
        std::cout << BLUE << this->_name << AQUAMARINE " attacks" RESET_COLOR " with their " YELLOW << this->_weapon->getType() << RESET_COLOR "."<< std::endl;
    else
        std::cout << this->_name << " attacks without weapons" << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
    this->_weapon = &newWeapon;
    //std::cout << "Weapon in " << this->_name << " set to " << _weapon->getType() << "." << std::endl;
}