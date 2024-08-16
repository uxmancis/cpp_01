/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:10:04 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/14 19:38:05 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

/*Function: newZombie
*
*   What? Creates a new 'Zombie' object in HEAP,
*   Sets its name, 
*   Immediately calls the 'announce' function to print thee zombie's name.
*
*   About HEAP memory allocation:
*		  · Lifetime: objects allocated on the heap have a longer lifetime.
*           They persist until you explicitly delete them using 'delete'.
*
*         · Memory management: We must manually manage memory by using
*           'new' and 'delete'.
*
*         · Performance: Generally slower than stack.
*
*         · Scope: objects allocated in heap can be used outside the function
*           where they were created, making them more flexible for use in 
*           different parts of our program.
*
*   About 'new': Used in C++ for dinamic memory allocation. Allocates memory
*               in heap (persists until explicitly deallocated with 'delete')
*               and returns a pointer to this memory.
*/
Zombie  *newZombie(std::string name)
{
    return (new Zombie(name)); //Zombie constructor is used, which takes 'name' as parameter
}
