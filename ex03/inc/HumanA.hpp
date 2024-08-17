/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:35:49 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/17 12:12:23 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

#define RED "\033[0;31m"
#define MAGENTA "\033[0;95m"
#define YELLOW "\033[0;93m"
#define GREEN "\033[0;92m"

class HumanA
{
    private:                    //Poniendo '&' y no poniendo '&' el output del programa es el mismo.
        Weapon&     _refWeapon; //referencia = evitamos generar una copia. Eficiencia en la Memoria y el Rendimiento
        std::string _name;
    
    public:
        HumanA(std::string name, Weapon& newWeapon); //Constructor
        ~HumanA(void); //Destructor
        void attack(void); //Member function
};

#endif

/* About using reference when instancing:
*       Weapon& _refWeapon;
*
*   Benefits:
*       1) Avoid generating a copy: More efficient memory & performance wise.
*       2) Consistency with original Object: 
*
*/