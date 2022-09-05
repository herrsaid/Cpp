/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salamane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:35:09 by salamane          #+#    #+#             */
/*   Updated: 2022/08/30 18:35:15 by salamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

#define CONTACT_HPP

#include <string>

class Contact{
    private:
        std::string firstname;
        std::string lastname;
        std::string number;
        std::string nickname;
        std::string darketsecret;
    public:
        Contact();
        ~Contact();
        void    setfirstname(std::string first);
        void    setlastname(std::string lastname);
        void    setnumber(std::string number);
        void    setnickname(std::string nickname);
        void    setdarkestsecret(std::string darcketsecret);
        std::string    getfirstname();
        std::string    getlastname();
        std::string    getnumber();
        std::string    getnickname();
        std::string    getdarkestsecret();
};

#endif