/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:35:38 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/17 14:02:30 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl()
{
    complaints[0] = &Harl::debug;
    complaints[1] = &Harl::info;
    complaints[2] = &Harl::warning;
    complaints[3] = &Harl::error;
}

Harl::~Harl(void)
{}

// Define the private member functions
void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain (std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int	i;
    /*  Array of pointers to member functions*/
	void    (Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*ptr[i])();
			break;
		}
        i++;
	}
	if (i == 4)
		std::cout << YELLOW << "Error: Not a valid level (DEBUG, INFO, WARNING, ERROR)." RESET_COLOR << std::endl;
}