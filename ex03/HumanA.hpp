/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:53:08 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 21:13:51 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

class HumanA
{
public:
	void attack();

	HumanA(const std::string& name, Weapon& weapon);
	~HumanA();

private:
	std::string _name;
	Weapon& _weapon;
};