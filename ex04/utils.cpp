/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:58:15 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/17 15:03:07 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <fstream>
#include <iostream>
#include <exception>

bool ftos(std::ifstream& inFile, std::string& content) {
	std::string line;

	while (std::getline(inFile, line)) {
		try {
			content += line + "\n";
		} catch (const std::bad_alloc& e) {
			std::cerr << "Error encountered while reading file: " << e.what() << std::endl;
			return false;
		} catch (const std::length_error& e) {
			std::cerr << "Error encountered while reading file: " << e.what() << std::endl;
			return false;
		}
	}
	return true;
}

std::string* replaceAll(const std::string& str, const std::string& from, const std::string& to) {
	std::string* result = new std::string();
	size_t curr_pos = 0;
	size_t found_pos;

	while ((found_pos = str.find(from, curr_pos)) != std::string::npos) {
		try {
			result->append(str, curr_pos, found_pos - curr_pos);
			result->append(to);
		} catch (const std::bad_alloc& e) {
			std::cerr << "Memory allocation failed: " << e.what() << std::endl;
			return nullptr;
		} catch (const std::length_error& e) {
			std::cerr << "Maximum length exceeded: " << e.what() << std::endl;
			return nullptr;
		}
		curr_pos = found_pos + from.length();
	}

	try {
		result->append(str, curr_pos, std::string::npos);
	} catch (const std::bad_alloc& e) {
		std::cerr << "Memory allocation failed: " << e.what() << std::endl;
		return nullptr;
	} catch (const std::length_error& e) {
		std::cerr << "Maximum length exceeded: " << e.what() << std::endl;
		return nullptr;
	}
	return result;
}
