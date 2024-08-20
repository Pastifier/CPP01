/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:48:45 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 17:45:40 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* firstZombie;

	try {
		firstZombie = new Zombie[N];
		if (!N) {
			delete[] firstZombie;
			std::cerr << "WARNING: array of objects allocated with zero elements will now be deleted. Substituting with NULL" << std::endl;
			return NULL;
		}
	} catch (std::bad_alloc& e) {
		std::cerr << "Allocation failed: " << e.what() << std::endl;
		return NULL;
	}
	for (int i = 0; i < N; i++)
		firstZombie[i].setName(name);

	return firstZombie;
}