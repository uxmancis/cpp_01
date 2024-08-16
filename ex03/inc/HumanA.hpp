/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:35:49 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/15 11:59:14 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon&     _refWeapon;
        std::string _name;
    
    public:
        HumanA(std::string name, Weapon& newWeapon); //Constructor
        ~HumanA(void); //Destructor
        
        void attack(void);
};

#endif