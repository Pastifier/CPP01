/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:42:03 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/17 15:02:23 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
#include <iostream>
#include <exception>

bool ftos(std::ifstream& inFile, std::string& content);
std::string* replaceAll(const std::string& str, const std::string& from, const std::string& to);