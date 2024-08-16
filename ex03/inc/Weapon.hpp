/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:35:56 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/15 14:04:19 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

/*C++ Standard Library is recommended in subject: https://en.cppreference.com/w/cpp/header*/
#include <string> //std::string
#include <iostream> //std::cout, std::endl

#define AQUAMARINE "\033[0;96m"
#define RESET_COLOR "\033[0m"

class Weapon
{
    private:
        std::string _type;
    
    public:
        Weapon(void); //Constructor
        Weapon(std::string type); //Constructor 2.0
        ~Weapon(void); //Destructor
        
        const std::string& getType(void);
        void               setType(std::string type);
};

#endif