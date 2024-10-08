/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:47:53 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 20:20:01 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	_type = "";
}

Weapon::Weapon(const std::string& type)
{
	_type = type;
}

Weapon::~Weapon()
{
}

Weapon& Weapon::operator=(const Weapon& other)
{
	this->_type = other._type;
	return (*this);
}

void Weapon::setType(const std::string& newType)
{
	_type = newType;
}

const std::string& Weapon::getType()
{
	return (_type);
}