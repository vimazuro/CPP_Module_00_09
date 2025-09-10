/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:37:48 by vimazuro          #+#    #+#             */
/*   Updated: 2025/09/02 12:35:40 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int	i = 1;
	int	j;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (std::islower(argv[i][j]))
					std::cout << (char)std::toupper(argv[i][j]);
				else
					std::cout << argv[i][j];
				j++;
			}
			
			i++;
		}
	}
	std::cout << std::endl;
}