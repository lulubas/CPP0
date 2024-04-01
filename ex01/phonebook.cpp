/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 00:15:48 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/01 02:23:31 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook() : nextIndex(0) {}

void PhoneBook::sayHello() const {
    std::cout << "=============================================\n";
    std::cout << " Welcome to the Amazing PhoneBook! 📖\n";
    std::cout << "=============================================\n\n";
    std::cout << "Here's what you can do:\n";
    std::cout << " - ADD: Add a new contact\n";
    std::cout << " - SEARCH: Look up an existing contact\n";
    std::cout << " - EXIT: Close the PhoneBook\n";

}

void PhoneBook::sayGoodbye() const {
    std::cout << "=============================================\n";
    std::cout << " Thank you for using the Amazing PhoneBook! 📚\n";
    std::cout << " We hope to see you again soon.\n";
    std::cout << " Goodbye! 👋\n";
    std::cout << "=============================================\n\n";
}

void PhoneBook::addContact() {
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phone;
    std::string secret;

    system("clear");
    firstname = PhoneBook::inputInfo("First Name");
    lastname = PhoneBook::inputInfo("Last Name");
    nickname = PhoneBook::inputInfo("Nickname");
    phone = PhoneBook::inputInfo("Phone");
    secret = PhoneBook::inputInfo("Secret");

    Contact newContact;
    newContact.setInfo(firstname, lastname, nickname, phone, secret);
    contacts[nextIndex] = newContact;

    nextIndex = (nextIndex + 1) % 8;
}

std::string PhoneBook::inputInfo(std::string str) {
    std::string new_info;
    while (new_info.empty())
    {
        std::cout << "Enter " << str << ": ";
        std::getline(std::cin, new_info);
    }
    return (new_info);
}

void PhoneBook::searchContact() const {
    int index;
    std::string str;
    
    PhoneBook::promptSearch();
    std::cout << "Enter contact #";
    while (true)
    {
        std::cout << "Enter contact index> ";
        std::getline(std::cin, str);
        if (str == "EXIT")
            break;
            
        try {
            index = std::stoi(str);
        } catch (const std::invalid_argument& e) {
            std::cerr << "Invalid input: Please enter an integer (numbers)\n";
            continue;
        } catch (const std::out_of_range& e) {
            std::cerr << "Invalid input: the number entered is out of range for an integer.\n";
            continue;
        }
        
        if (index > 8 || index < 1)
            std::cout << "Choose a number between 1 and 8\n";
        else if (!contacts[index - 1].isValid())
            std::cout << "Contact does not exist\n";
        else
        {
            PhoneBook::printContact(index - 1);
            break;
        }
    }
}

void PhoneBook::promptSearch() const {
    int i;
    std::cout << "=============================================\n";
    std::cout << "Choose among the contacts currently in the PhoneBook 👀.\n";
    std::cout << "Enter EXIT to go back to the PhoneBook main page.\n";
    std::cout << "=============================================\n\n";

    displayField("Index");
    displayField("First Name");
    displayField("Last Name");
    displayField ("Nickname");
    std::cout << std::endl;

    for (i = 0; i < 8; i++) {
        displayField(std::to_string(i + 1));
        displayField(contacts[i].getFirstName());
        displayField(contacts[i].getLastName());
        displayField(contacts[i].getNickname());
        std::cout << std::endl;
    }
}

void PhoneBook::displayField(const std::string str) const {
    std::cout << std::right << std::setw(10) << (str.length() < 10 ? str : str.substr(0, 9).append(".")) << " | ";
}


void PhoneBook::printContact(int index) const {
    std::string temp;

    system("clear");
    std::cout << "=============================================\n";
    std::cout << "Your Search Result: \n";
    std::cout << "=============================================\n\n";
    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhone() << std::endl;
    std::cout << "Secret: " << contacts[index].getSecret() << std::endl;
    std::cout << "\n=============================================\n";
    std::cout << "Press Enter to go back to main menu ";
    std::getline(std::cin, temp);
}

