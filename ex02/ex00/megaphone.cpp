/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:18:56 by lbastien          #+#    #+#             */
/*   Updated: 2024/03/27 17:05:39 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

class ArgumentClass {
	public:
		ArgumentClass(const char *str) : str(str) {}
		void print_toupper() const {
			int i = 0;
			while (str[i]) {
				if (islower(str[i]))
					std::cout << char(std::toupper(str[i]));
				else
					std::cout << str[i];
				i++;
			}
		}
	private:
		const char *str;
};

int main (int argc, char **argv) {
	if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			ArgumentClass stdin_arg(argv[i]);
			stdin_arg.print_toupper();
			std::cout << " ";
		}
		std::cout << std::endl;
	} else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return (EXIT_SUCCESS);
}
