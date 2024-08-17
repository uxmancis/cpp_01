/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:35:51 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/17 12:56:33 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

#define CYAN "\033[0;96m"
#define GREEN "\033[0;92m"
#define BLUE "\033[0;94m"
#define RED "\033[0;31m"
#define YELLOW "\033[0;93m"

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