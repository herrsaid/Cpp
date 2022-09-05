# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salamane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/30 18:09:52 by salamane          #+#    #+#              #
#    Updated: 2022/08/30 18:10:03 by salamane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=PhoneBook
GXX=g++
CXXFLAGS=-Wall -Wextra -Werror -o
SRCS=main.cpp Contact.cpp Phonebook.cpp

$(NAME):
	$(GXX) $(SRCS) $(CXXFLAGS) $(NAME)
all:$(NAME)

fclean:
	rm -rf $(NAME)
re:fclean all
