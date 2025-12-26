/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 12:56:09 by vimazuro          #+#    #+#             */
/*   Updated: 2025/12/26 14:49:24 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

#define RESET "\033[0m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;
    
    std::cout   << std::left << std::setw(27) 
                << "The memory address of " << YELLOW 
                << std::left << std::setw(28) 
                << "the string variable: " << BLUE
                << &str << RESET << std::endl;
    std::cout   << std::left << std::setw(27) 
                << "The memory address held by " << YELLOW
                << std::left << std::setw(28) 
                << "a pointer to the string: " << BLUE
                << stringPTR << RESET << std::endl;
    std::cout   << std::left << std::setw(27) 
                << "The memory address held by " << YELLOW
                << std::left << std::setw(28) 
                << "a reference to the string: " << BLUE
                << &stringREF << RESET << std::endl;

    std::cout << std::endl;

    std::cout   << std::left << std::setw(27) 
                << "The value of " << YELLOW
                << std::left << std::setw(28) 
                << "the string variable: " << BLUE 
                << str << RESET << std::endl;
    std::cout   << std::left << std::setw(27) 
                << "The value pointed to by " << YELLOW
                << std::left << std::setw(28) 
                << "a pointer to the string: " << BLUE
                << *stringPTR << RESET << std::endl;
    std::cout   << std::left << std::setw(27) 
                << "The value pointed to by " << YELLOW
                << std::left << std::setw(28) 
                << "a reference to the string: " << BLUE
                << stringREF << RESET << std::endl;
    return 0;
}