/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:39:30 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 17:16:43 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class Zombie
{
public:
	void announce(void);
	Zombie();
	~Zombie();

	void setName(const std::string& name);

private:
	std::string _name;
};

Zombie* zombieHorde(int N, std::string name);