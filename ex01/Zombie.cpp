/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:45:39 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 17:12:56 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	_name = "";
}

Zombie::~Zombie()
{
	std::cout << _name << " has been deleted." << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string& name)
{
	std::string nameCopy = name;
	_name = nameCopy;
}