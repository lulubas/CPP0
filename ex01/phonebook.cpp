/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:15:16 by lbastien          #+#    #+#             */
/*   Updated: 2024/03/27 17:27:41 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str;
	while (str.compare("EXIT"))
	{
		std::cout << "Type a string here: ";
		std::cin >> str;
		std::cout << "String is: " << str;
		std::cout << std::endl;
	}
	return(EXIT_SUCCESS);
}