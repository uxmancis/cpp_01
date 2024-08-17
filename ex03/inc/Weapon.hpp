/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:35:56 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/17 13:19:47 by uxmancis         ###   ########.fr       */
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
        const std::string& getType(void) const; //Getter
         /* About Getter:  
        *  'const' at beginning: function returns a 'const' reference to a std::string.
        *                         This means we are providing access to the internal
        *                         string without allowing modification.
        *                         'const' ensures that the reference cannot be used
        *                         to modify the std::string it refers to.<
        *                         It is efficient because it avoids copying the string.
        *                         The caller gets a reference to the actual member
        *                         variable rather than a copy.
        * 
        *   'const' at the end (function qualifier): indicates that the member function
        *                                            does not modify the state of the object.
        *                                            Therefore, it is allowed to return a 
        *                                            'const' reference.
        *    
        *   I've got the exact same output from declaring the function member getter
        *   with the following 2 prototypes:
        *       1) const std::string& getName(void) const { return(_name)};
        *          *const reference is required in prototype by subject
        * 
        *       2) std::string getName(void) const { return(_name); };
        *
        */
        void               setType(std::string type); //Setter
};

#endif