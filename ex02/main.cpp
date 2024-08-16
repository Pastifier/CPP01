/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:10:04 by ebinjama          #+#    #+#             */
/*   Updated: 2024/08/16 18:18:13 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

typedef unsigned long long ll_t;

int main(void) {
	std::string brain = "HI THIS IS BRAIN";

	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "brain's addr: " << (ll_t)stringPTR << std::endl;
	std::cout << "stringPTR's addr: " << (ll_t)(&stringPTR) << std::endl;
	std::cout << "stringREF's addr: " << (ll_t)(&stringREF) << std::endl;

	std::cout << "brain's value: " << brain << std::endl;
	std::cout << "value of string pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value of string pointed to by stringREF: " << stringREF << std::endl;

	return 0;
}
