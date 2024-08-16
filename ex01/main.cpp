/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:38:07 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 18:06:35 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <limits>

#define HORDE_NUM_ZOMBIE 3

int main(void)
{
	Zombie* horde = zombieHorde(HORDE_NUM_ZOMBIE, "HordeMember");

	for (int i = 0; i < HORDE_NUM_ZOMBIE; i++) {
		horde[i].announce();
	}
	
	delete[] horde;

	//Zombie* horde1 = zombieHorde(INT_MAX, "hello?");
	//if (!horde1) {
	//	std::cout << "Epic." << std::endl;
	//} else {
	//	horde1[0].announce();
	//	delete[] horde1;
	//}
	return 0;
}
