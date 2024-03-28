/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 00:43:01 by lbastien          #+#    #+#             */
/*   Updated: 2024/03/28 01:13:21 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include<string>

class Contact {
    public:
        Contact(const std::string& firstname,
                const std::string& lastname,
                const std::string& nickname,
                const std::string& phone,
                const std::string& secret);
                
        std::string get_firstname();
        std::string get_lastname();
        std::string get_nickname();
        std::string get_phone();
        std::string get_sevret();

    private:
        const std::string& firstname,
        const std::string& lastname,
        const std::string& nickname,
        const std::string& phone,
        const std::string& secret
}

#endif