/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:22:07 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 16:29:26 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class Zombie
{
public:
	void announce(void);

	Zombie(const std::string& name);
	~Zombie();

private:
	std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);