/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salamane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:33:44 by salamane          #+#    #+#             */
/*   Updated: 2022/09/01 13:33:51 by salamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void    Contact::setfirstname(std::string first)
{
    firstname = first;
}

void    Contact::setlastname(std::string last)
{
    lastname = last;
}

void    Contact::setnumber(std::string num)
{
    number = num;
}

void    Contact::setnickname(std::string nick)
{
    nickname = nick;
}

void    Contact::setdarkestsecret(std::string secret)
{
    darketsecret = secret;
}

std::string Contact::getfirstname()
{
    return (firstname);
}

std::string Contact::getlastname()
{
    return (lastname);
}

std::string Contact::getnumber()
{
    return (number);
}

std::string Contact::getdarkestsecret()
{
    return (darketsecret);
}

std::string Contact::getnickname()
{
    return (nickname);
}
