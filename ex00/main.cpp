/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:37:02 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 16:03:19by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <iomanip>

int main(void) {
	std::cout << "------- TESTING FOR ZOMBIE ---------\n";
	std::cout << "Test 1 (normalZombie constructor, Zombie::announce() method-call):\n\t";
	Zombie normalZombie = Zombie("normalZombie");
	normalZombie.announce();
	std::cout << "____________________________________\n" << std::endl;

	std::cout << "Test 2 (allocatedZombie constructor/destructor, Zombie::announce() method-call):\n\t";
	Zombie* allocatedZombie = newZombie("allocatedZombie");
	allocatedZombie->announce();
	std::cout << "____________________________________\n" << std::endl;

	std::cout << "Test 3 (randomChump instantiation and destruction upon exiting method-scope):\n\t";
	randomChump("randomChump");
	std::cout << "____________________________________\n" << std::endl;

	std::cout << "Finally, destroy all remaining bois.\n\t";
	delete allocatedZombie;
	std::cout << "\t";

	return 0;
}