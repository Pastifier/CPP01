/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:07:09 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/17 17:46:09 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Harl
{
public:
	void complain(std::string level);

	Harl();

private:
	void (Harl::*_funcs[4])();
	std::string _levels[4];

	void debug();
	void info();
	void warning();
	void error();
};