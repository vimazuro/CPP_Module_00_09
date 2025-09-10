/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 13:57:00 by vimazuro          #+#    #+#             */
/*   Updated: 2025/09/05 15:28:12 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0), _count(0) {}

void PhoneBook::add_contact()
{
	Contact &c = _contacts[_index];

	std::string firstname = get_name_input(BLUE "Enter first name: " RESET);
	c.add_firstname(firstname);

	std::string lastname = get_name_input(BLUE "Enter last name: " RESET);
	c.add_lastname(lastname);

	std::string nickname = get_nickname_input(BLUE "Enter nickname: " RESET);
	c.add_nickname(nickname);

	std::string phone = get_phone_input(BLUE "Enter phone number: " RESET);
	c.add_phone(phone);

	std::string secret = get_non_empty_input(BLUE "Enter darkest secret: " RESET);
	c.add_secret(secret);

	std::cout << std::endl;

	_index = (_index + 1) % 8;
	if (_count < 8)
		_count++;
}

void PhoneBook::check_EOF()
{
	if (std::cin.eof())
	{
		std::cout	<< RED << "Input terminated (EOF)."
					<< RESET << std::endl;
		std::exit(1);
	}
}

std::string PhoneBook::get_non_empty_input(const std::string &prompt)
{
	std::string input;

	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		check_EOF();
		if (!input.empty())
			return input;

		std::cout	<< RED << "Field is empty, please enter the data."
					<< RESET << std::endl;
	}
}

std::string PhoneBook::get_name_input(const std::string &prompt)
{
	std::string	input;
	bool		all_good;

	while (true)
	{
		input = get_non_empty_input(prompt);

		all_good = true;
		for (size_t i = 0; i < input.size(); i++)
		{
			unsigned char c = input[i];
			if (!(std::isalpha(c) || c == '-' || c == ' '))
			{
				all_good = false;
				break;
			}
		}

		if (all_good)
			return input;
		else
		{
			std::cout << RED << "Name can contain only letters, spaces and '-'."
					  << RESET << std::endl;
		}
	}
}

std::string PhoneBook::get_nickname_input(const std::string &prompt)
{
	std::string	input;
	bool		all_good;

	while (true)
	{
		input = get_non_empty_input(prompt);

		all_good = true;
		for (size_t i = 0; i < input.size(); i++)
		{
			unsigned char c = input[i];
			if (!(std::isalnum(c) || c == '-' || c == ' '))
			{
				all_good = false;
				break;
			}
		}

		if (all_good)
			return input;
		else
		{
			std::cout << RED << "Nickname can contain only letters, digits, spaces and '-'."
					  << RESET << std::endl;
		}
	}
}

std::string PhoneBook::get_phone_input(const std::string &prompt)
{
	std::string	input;
	bool		all_good;

	while (true)
	{
		input = get_non_empty_input(prompt);

		all_good = true;
		for (size_t i = 0; i < input.size(); i++)
		{
			unsigned char c = input[i];
			if (!(std::isdigit(c) || c == '-'))
			{
				all_good = false;
				break;
			}
		}

		if (all_good)
			return input;
		else
		{
			std::cout	<< RED << "Phone numder can contain only digits and '-'."
						<< RESET << std::endl;
		}
	}
}

void PhoneBook::search_contact(int contact_index)
{
	std::cout	<< BLUE << "First Name: " << RESET
				<< _contacts[contact_index].get_firstname()
				<< std::endl
				<< BLUE << "Last Name: " << RESET
				<< _contacts[contact_index].get_lastname()
				<< std::endl
				<< BLUE << "Nickname: " << RESET
				<< _contacts[contact_index].get_nickname()
				<< std::endl
				<< BLUE << "Phone number: " << RESET
				<< _contacts[contact_index].get_phone()
				<< std::endl
				<< BLUE << "Darkest secret: " << RESET
				<< _contacts[contact_index].get_secret()
				<< std::endl
				<< std::endl;
}

std::string PhoneBook::format_field(const std::string &str)
{
	if (str.length() <= 10)
		return str;
	else
		return str.substr(0, 9) + ".";
}

void PhoneBook::print_contacts()
{
	std::string	input;
	int			num;

	std::cout	<< std::setw(10) << "Index"
				<< "|" << std::setw(10) << "First Name"
				<< "|" << std::setw(10) << "Last Name"
				<< "|" << std::setw(10) << "Nickname"
				<< std::endl;

	for (int i = 0; i < _count; i++)
	{
		std::cout	<< std::setw(10) << i + 1
					<< "|" << std::setw(10)
					<< format_field(_contacts[i].get_firstname())
					<< "|" << std::setw(10)
					<< format_field(_contacts[i].get_lastname())
					<< "|" << std::setw(10)
					<< format_field(_contacts[i].get_nickname())
					<< std::endl;
	}
	while (true)
	{
		std::cout	<< GREEN << "Enter index to display or EXIT: "
					<< RESET;
		std::getline(std::cin, input);
		check_EOF();
		if (input == "EXIT")
			break;
		else if (input.size() == 1 && isdigit(input[0]))
		{
			num = input[0] - '1';
			if (num >= 0 && num < _count)
				search_contact(num);
			else
			{
				std::cout	<< RED << "Invalid index."
							<< RESET << std::endl
							<< std::endl;
			}
		}
		else
		{
			std::cout	<< RED << "Invalid index."
						<< RESET << std::endl
						<< std::endl;
		}
	}
}
