/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:09:17 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/15 09:55:37 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#define GREEN "\033[0;92m"
#define RED "\033[0;31m"
#define AQUAMARINE "\033[0;96m"
#define RESET_COLOR "\033[0m"

/*C++ Standard Library is recommended in subject: https://en.cppreference.com/w/cpp/header*/
#include <string> //std::string
#include <iostream> //std::endl

/* Zombie Class definition 
*
*   private: only the class' methods can access it directly
*   public: so that it can be called from outside the class
*/
class Zombie
{
    private:
        std::string _name; //when private, underscore '_' is widely used.
    
    public:
        Zombie(std::string name); //Constructor
        Zombie(void);
        ~Zombie(void); //Destructor
        void announce(void); //Member function
        void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);
Zombie  *newZombie(std::string name); //HEAP: creation and destruction manually handled
void randomChump(std::string name); //STACK: creation and destruction automatically managed

#endif