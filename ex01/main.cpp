/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:15:16 by lbastien          #+#    #+#             */
/*   Updated: 2024/07/23 17:39:00 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
			return (0);
		}
	}
	return(0);
}