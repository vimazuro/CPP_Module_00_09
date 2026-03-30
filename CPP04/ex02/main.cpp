/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 16:27:40 by vimazuro          #+#    #+#             */
/*   Updated: 2026/03/30 15:51:10 by vimazuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Colors.hpp"

int main()
{

//	const AAnimal* meta = new AAnimal();
	const AAnimal *j = new Dog();
	const AAnimal *i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	delete j;
	delete i;
	return 0;

/*
	AAnimal* animals[4];
	for (int i = 0; i < 2; i++)
		animals[i] = new Dog();
	for (int i = 2; i < 4; i++)
		animals[i] = new Cat();
	for (int i = 0; i < 4; i++)
		animals[i]->makeSound();
	for (int i = 0; i < 4; i++)
		delete animals[i];
*/
/*
	Dog a;
	a.setIdea(0, "eat");
	Dog b = a;
	b.setIdea(0, "sleep");

	std::cout << GREEN << a.getIdea(0) << RESET << std::endl;
	std::cout << GREEN << b.getIdea(0) << RESET << std::endl;

	return 0;
*/
}
