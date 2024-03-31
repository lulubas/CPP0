/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 00:43:11 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/01 00:24:51 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact() : valid(false) {}

std::string Contact::getFirstName() const {
    return(firstname_);
}

std::string Contact::getLastName() const {
    return(lastname_);
}

std::string Contact::getNickname() const {
    return(nickname_);
}

std::string Contact::getPhone() const {
    return(nickname_);
}

std::string Contact::getSecret() const {
    return(secret_);
}

void Contact::setInfo(const std::string& firstname,
                    const std::string& lastname,
                    const std::string& nickname, 
                    const std::string& phone,
                    const std::string& secret) {
    firstname_ = firstname;
    lastname_ = lastname;
    nickname_ = nickname;
    phone_ = phone;
    secret_ = secret;
    valid = true;
}

bool Contact::isValid(void) const {
        return (valid);
}



