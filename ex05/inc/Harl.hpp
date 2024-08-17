/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:35:40 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/17 14:02:06 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

#define YELLOW "\033[0;93m"
#define RESET_COLOR "\033[0m"

/*Objecive of ex05 in cpp01:
*   To use pointers to member functions.
*/
class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

        // Array of pointers to member functions
        void (Harl::*complaints[4])(void);
        
    public:
        Harl(void);
        ~Harl(void);
        void complain (std::string level);
    
};

#endif