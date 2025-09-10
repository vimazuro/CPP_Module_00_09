/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 13:55:12 by vimazuro          #+#    #+#             */
/*   Updated: 2025/09/05 14:10:40 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	mybook;
	std::string	command;

	while (true)
	{
		std::cout	<< GREEN
					<< "Enter one of three commands: ADD, SEARCH or EXIT"
					<< RESET << std::endl;
		
		std::getline(std::cin, command);
		mybook.check_EOF();
		
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			mybook.add_contact();
		else if (command == "SEARCH")
			mybook.print_contacts();
		else {
			std::cout 	<< RED << "Invalid command."
						<< RESET << std::endl << std::endl;
		}
	}
	return 0;
}