/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 00:43:01 by lbastien          #+#    #+#             */
/*   Updated: 2024/04/01 00:26:30 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "main.hpp"

class Contact {
    public:

        Contact();

        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhone() const;
        std::string getSecret() const;

        void setInfo(const std::string& firstname,
                    const std::string& lastname,
                    const std::string& nickname, 
                    const std::string& phone,
                    const std::string& secret);
        bool isValid(void) const;

    private:
        std::string firstname_;
        std::string lastname_;
        std::string nickname_;
        std::string phone_;
        std::string secret_;
        bool valid;
};

#endif