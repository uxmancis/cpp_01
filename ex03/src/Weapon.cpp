/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:36:12 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/15 14:05:10 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{}

Weapon::~Weapon(void)
{}

const std::string& Weapon::getType(void)
{
    return(this->_type);
}

void Weapon::setType(std::string new_type)
{
    this->_type = new_type;
}