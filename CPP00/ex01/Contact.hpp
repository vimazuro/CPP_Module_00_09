/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:01:17 by vimazuro          #+#    #+#             */
/*   Updated: 2025/09/05 14:46:32 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phone;
	std::string _secret;

public:
	void		add_firstname(std::string new_firstname);
	void		add_lastname(std::string new_lastname);
	void		add_nickname(std::string new_nickname);
	void		add_phone(std::string new_phone);
	void		add_secret(std::string new_secret);
	std::string	&get_firstname();
	std::string	&get_lastname();
	std::string	&get_nickname();
	std::string	&get_phone();
	std::string	&get_secret();
};

#endif