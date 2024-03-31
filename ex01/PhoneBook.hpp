/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 00:16:40 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/01 00:23:23 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "main.hpp"

class PhoneBook {
    public:
        PhoneBook();

        void sayHello() const;
        void sayGoodbye() const;
        void addContact();
        void searchContact() const;
    
    private:
        int nextIndex;
        Contact contacts[8];
        std::string inputInfo(std::string str);
        void promptSearch()  const;
        void displayField(const std::string str) const;
        void printContact(int index) const;
};

#endif