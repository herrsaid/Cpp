/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salamane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:45:52 by salamane          #+#    #+#             */
/*   Updated: 2022/09/01 14:45:57 by salamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}

void    PhoneBook::add(int index)
{
    std::string feild;

    std::cout << "enter first name: ";
    std::cin >> feild;
    Contacts[index].setfirstname(feild);
    if (std::cin.eof())
        return;
    std::cout << "enter last name: ";
    std::cin >> feild;
    Contacts[index].setlastname(feild);
    if (std::cin.eof())
        return;
    std::cout << "enter phonenumber: ";
    std::cin >> feild;
    Contacts[index].setnumber(feild);
    if (std::cin.eof())
        return;
    std::cout << "enter nickname: ";
    std::cin >> feild;
    Contacts[index].setnickname(feild);
    if (std::cin.eof())
        return;
    std::cout << "enter the darkest secret: ";
    std::cin >> feild;
    Contacts[index].setdarkestsecret(feild);
    if (std::cin.eof())
        return;
}

std::string getstr(Contact Contacts, int index)
{
    std::string str;
    if (index == 1)
    {
        str = Contacts.getfirstname();
        if (str.size() > 10)
        {
            str = str.substr(0, 9);
            str += '.';
            return (str);
        }
        return(Contacts.getfirstname());
    }
    else if (index == 2)
    {
        str = Contacts.getlastname();
        if (str.size() > 10)
        {
            str = str.substr(0, 9);
            str += '.';
            return (str);
        }
        return(Contacts.getlastname());
    }
    else if (index == 3)
    {
        str = Contacts.getnickname();
        if (str.size() > 10)
        {
            str = str.substr(0, 9);
            str += '.';
            return (str);
        }
        return(Contacts.getnickname());
    }
    return ("hhh");
}

void    PhoneBook::search(int size)
{
    int i;
    
    i = 0;
    std::cout << std::setw(10);
    std::cout << " index ";
    std::cout << std::setw(10);
    std::cout << " firstname ";
    std::cout << std::setw(10);
    std::cout << " lastname ";
    std::cout << std::setw(10);
    std::cout << "  nickname ";
    std::cout << std::endl;
    while (i < size)
    {
        std::cout << std::setw(10);
        std::cout << i + 1;
        std::cout << '|';
        std::cout << std::setw(10);
        std::cout << getstr(Contacts[i], 1);
        std::cout << '|';
        std::cout << std::setw(10);
        std::cout << getstr(Contacts[i], 2);
        std::cout << '|';
        std::cout << std::setw(10);
        std::cout << getstr(Contacts[i], 3);
        std::cout << std::endl;
        i++;
    }
}