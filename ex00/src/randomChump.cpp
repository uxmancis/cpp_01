/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:10:34 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/14 18:37:24 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

/*Function: randomChump
*
*   What? Creates a new 'Zombie' object in STACK,
*   Sets its name, 
*   Immediately calls the 'announce' function to print thee zombie's name.
*
*   About STACK memory allocation:
*		  · Lifetime: Limited lifetime objects are allocated in Stack, they're
*           automatically destroyed when function in which they were
*           created exits.
*
*         · Memory management: No need to manually manage memory.
*           C++ runtime takes care of cleanup.
*
*         · Performance: Generally faster than heap.
*
*         · Scope: objects allocated in stack are local to function, cannot
*           be used outside.
*/
void randomChump(std::string name)
{
    Zombie z = Zombie(name);
    z.announce();
}