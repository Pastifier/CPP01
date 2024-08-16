/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 20:39:29 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 21:11:49 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
public:
	void attack();
	void setWeapon(Weapon weapon);

	HumanB(const std::string& name);

private:
	std::string _name;
	Weapon* _weapon;
};
