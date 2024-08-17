/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:55:38 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/17 13:13:49by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char* argv[]) {
	if (argc != 4) {
		std::cerr << "Usage:\n\t./sifl <filename> <string1> <string2>" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1, s2;
	try {
		s1 = argv[2];
		s2 = argv[3];
	} catch (std::bad_alloc& e) {
		std::cerr << "Exception caught: setting strings\n" << e.what() << std::endl;
	}

	std::ifstream fileIn (filename);
	if (!fileIn) {
		std::cerr << "Error opening file: " << filename << " for reading." << std::endl;
		return 1;
	}

	std::string content;
	if (!ftos(fileIn, content)) {
		if (fileIn.is_open())
			fileIn.close();
		return 1;
	}
	fileIn.close();

	std::ofstream fileOut(filename + ".replace");
	if (!fileOut) {
		std::cerr << "Error creating/opening output file: " << filename + ".replace" << " for writing." << std::endl;
		return 1;
	}

	std::string* modifiedContent = replaceAll(content, s1, s2);
	if (!modifiedContent)
		return (fileOut.close(), 1);

	try {
		fileOut.exceptions(std::ofstream::badbit | std::ofstream::failbit);
		fileOut << *modifiedContent;
	} catch (const std::fstream::failure& e) {
		std::cerr << "Exception caught while writing to file: " << filename << "\n" << e.what() << std::endl;
		fileOut.close();
		delete modifiedContent;
		return 1;
	}


	fileOut.close();
	delete modifiedContent;

	return 0;
}