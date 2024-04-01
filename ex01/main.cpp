/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:15:16 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/01 02:23:33 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
	std::string str;
	PhoneBook Mybook;
	while (true)
	{
		system("clear");
		Mybook.sayHello();
		std::cout << "What would you like to do now?\n";
    	std::cout << "> ";
		std::getline(std::cin, str);
		if (str == "ADD")
			Mybook.addContact();
		else if (str == "SEARCH")
			Mybook.searchContact();
		else if (str == "EXIT")
		{
			Mybook.sayGoodbye();
			return (EXIT_SUCCESS);
		}
	}
	return(EXIT_SUCCESS);
}