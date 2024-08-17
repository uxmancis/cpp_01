/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:07:52 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/17 10:01:00 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i;
    Zombie *horde = new Zombie[N];
    
    i = 0;
    while (N > 0)
    {
        horde[i].setName(name);
        N--;
        i++;
    }
    return (horde);
}