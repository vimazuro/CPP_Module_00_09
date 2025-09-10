/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:00:28 by vimazuro          #+#    #+#             */
/*   Updated: 2025/09/05 15:21:04 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::add_firstname(std::string new_firstname)
{
	_firstname = new_firstname;
}

void Contact::add_lastname(std::string new_lastname)
{
	_lastname = new_lastname;
}

void Contact::add_nickname(std::string new_nickname)
{
	_nickname = new_nickname;
}

void Contact::add_phone(std::string new_phone)
{
	_phone = new_phone;
}

void Contact::add_secret(std::string new_secret)
{
	_secret = new_secret;
}

std::string &Contact::get_firstname()
{
	return _firstname;
}

std::string &Contact::get_lastname()
{
	return _lastname;
}

std::string &Contact::get_nickname()
{
	return _nickname;
}

std::string &Contact::get_phone()
{
	return _phone;
}

std::string &Contact::get_secret()
{
	return _secret;
}
