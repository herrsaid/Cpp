/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salamane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:36:14 by salamane          #+#    #+#             */
/*   Updated: 2022/08/30 18:36:19 by salamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <fstream>

int index_increment(int index)
{
    if (index == 7)
        return (0);
    else
        return (index + 1);
}

int main()
{
    int index;
    int size;
    PhoneBook Book;
    std::string cmd;

    index = 0;
    size = 0;
    while (1)
    {
        std::cout << "PhoneBook: ";
        std::getline(std::cin, cmd);
        if (std::cin.eof())
            return (0);
        if (cmd == "EXIT")
            return (0);
        if (cmd == "ADD")
        {
            Book.add(index);
            if (size < 8)
                size++;
            index = index_increment(index);
        }
        if (cmd == "SEARCH")
        {
            Book.search(size);
        }
    }
}