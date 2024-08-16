/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:19:01 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/15 10:33:25 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*C++ Standard Library is recommended in subject: https://en.cppreference.com/w/cpp/header*/
#include <string> //std::string
#include <iostream> //std::endl, std::scout

#define AQUAMARINE "\033[0;96m"
#define RESET_COLOR "\033[0m"

int main(void)
{
    //Step 1: Declare a string variable and initialize it   
    std::string str = "HI THIS IS BRAIN";

    //Step 2: Create a pointer to the string
    std::string *stringPTR = &str;

    //Step 3: Create a reference to the string
    std::string &stringREF = str;
    
    //Step 4: Print the memory addresses
    std::cout << AQUAMARINE "\n\n----------------- Memory addresses -----------------" RESET_COLOR << std::endl;
    std::cout << "1) Memory address of the string variable: " << &str << std::endl;
    std::cout << "2) Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "3) Memory address held by stringREF: " << &stringREF << std::endl;

    //Step 5: Print the values
    std::cout << AQUAMARINE "\n\n----------------------- Values ---------------------" RESET_COLOR << std::endl;
    std::cout << "1) Value of the string variable: " << str << std::endl;
    std::cout << "2) Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "3) Value pointed to by stringREF: " << stringREF << std::endl;
    std::cout << std::endl << std::endl;

    return (0);
}