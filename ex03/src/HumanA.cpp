/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:36:00 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/15 13:59:40 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& newWeapon) : _name(name), _refWeapon(newWeapon)
{
    std::cout << AQUAMARINE << this->_name << " HumanA object created." RESET_COLOR << std::endl; 
}

HumanA::~HumanA(void)
{
    std::cout << AQUAMARINE << this->_name << "HumanA object destroyed." RESET_COLOR << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->_name << "attacks with their " << _refWeapon.getType() << std::endl;
}