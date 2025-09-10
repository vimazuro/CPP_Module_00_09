/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 13:58:13 by vimazuro          #+#    #+#             */
/*   Updated: 2025/09/05 15:26:45 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

#define GREEN	"\033[32m"
#define RED		"\033[31m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"

class PhoneBook
{
private:
	Contact	_contacts[8];
	int		_index;
	int		_count;

public:
	PhoneBook();

	void		add_contact();
	void		print_contacts();
	void		search_contact(int contact_index);
	void		check_EOF();
	std::string	get_non_empty_input(const std::string &prompt);
	std::string	get_name_input(const std::string &prompt);
	std::string	get_nickname_input(const std::string &prompt);
	std::string	get_phone_input(const std::string &prompt);
	std::string	format_field(const std::string &str);
};

#endif