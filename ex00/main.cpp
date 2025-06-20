/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuhlbau <kmuhlbau@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:25:02 by kmuhlbau          #+#    #+#             */
/*   Updated: 2025/06/17 16:01:37 by kmuhlbau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	std::cout << "Creating Zombie on the heap" << std::endl;
	Zombie* zombie;
	zombie = newZombie("Zombie A");
	zombie->announce();
	std::cout << "Deleting Zombie on the heap" << std::endl;
	delete zombie;
	std::cout << "Creating Zombie on the stack" << std::endl;
	randomChump("Zombie B");
	return (0);
}