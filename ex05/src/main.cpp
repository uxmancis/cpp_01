/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:41:51 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/17 13:46:19 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main(void)
{
    Harl    classic_brother_in_law;

    classic_brother_in_law.complain("DEBUG");
    classic_brother_in_law.complain("INFO");
    classic_brother_in_law.complain("WARNING");
    classic_brother_in_law.complain("ERROR");
    classic_brother_in_law.complain("INVALID");
    return (0);
}