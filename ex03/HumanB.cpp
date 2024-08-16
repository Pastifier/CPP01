/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 20:42:31 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 21:11:33 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name)
{
	_name = name;
	_weapon = new Weapon();
}

void HumanB::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon weapon)
{
	Weapon* newWeapon;
	try {
		newWeapon = new Weapon();
	} catch (std::bad_alloc& e) {
		std::cerr << e.what() << std::endl;
	}
	*newWeapon = weapon;
	this->_weapon = newWeapon;
}