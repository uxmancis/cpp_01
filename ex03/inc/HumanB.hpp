/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:35:51 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/15 14:09:58 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon      *_weapon;
        std::string _name;
    
    public:
        HumanB(std::string name); //Constructor
        HumanB(void);
        ~HumanB(void); //Destructor
        
        void attack(void);
        void setWeapon(Weapon& newWeapon);
};

#endif