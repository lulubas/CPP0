/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 00:16:40 by lbastien          #+#    #+#             */
/*   Updated: 2024/03/28 01:25:40 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<Constact.hpp>
#include<string>

class PhoneBook {
    public:
        void hello(void) const;
        void addContact(const Contact newContact);
        void searchContact (int contactIndex) const;
    
    private:
        Contact contacts[8];
        int nextIndex;
}
