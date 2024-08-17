/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:36:00 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/17 13:23:26 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

/*  Constructor:
*
*   After ':' member initializer list (lista de inicialización de miembros)
*
*   Used to initialize members of the class before body of the constructor is
*   executed. If not done, "uninitialized reference member in class Weapon&"
*/
HumanA::HumanA(std::string name, Weapon& newWeapon) : _name(name), _refWeapon(newWeapon)
{
    std::cout << MAGENTA << this->_name << RESET_COLOR " HumanA object " << GREEN << "created." RESET_COLOR << std::endl; 
    
    /*In Object-Oriented Programming (OOP) the body of a constructor
    * is used for tasks that cannot be handled in the member initializer
    * list. A few examples of constructor's body use cases:
    *   1) Complex Initiallization Logic (if ... blablabla)
    *   2) Initialization of Non-Member Resources
    *   3) Calling Member Functions
    *   4) Setting up Relationships Between Members
    *   5) Error Handling
    *   //among others//
    * 
    * Member initializer list: ideal for directly initializing member 
    * variables.
    * 
    * Body of the constructor: crucial for performing additional setup
    * tasks that require logic, resource management or error handling.
    * In OOP it allows the constructor to fully prepare an object for 
    * use, ensuring that it startss in a valid state and is ready to 
    * perform its intended role in the application.
    * ---------------------------------------------------------------- */
}

HumanA::~HumanA(void)
{
    std::cout << MAGENTA << this->_name << RESET_COLOR " named HumanA object was" RED " destroyed." RESET_COLOR << std::endl;
}

void HumanA::attack(void)
{
    std::cout << MAGENTA << this->_name << AQUAMARINE " attacks" RESET_COLOR" with their " YELLOW << _refWeapon.getType()<< RESET_COLOR "."<< std::endl;
}