/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:42:12 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 20:20:20 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class Weapon
{
public:
	const std::string& getType();
	void setType(const std::string& weaponType);

	Weapon(const std::string& type);
	Weapon& operator=(const Weapon& other);

	Weapon();
	~Weapon();

private:
	std::string _type;
};