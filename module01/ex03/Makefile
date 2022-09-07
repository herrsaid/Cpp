NAME=moarBrainz
GXX=g++
CXXFLAGS=-Wall -Wextra -Werror -o
SRCS=main.cpp Zombie.cpp zombieHorde.cpp

$(NAME):
	$(GXX) $(SRCS) $(CXXFLAGS) $(NAME)
all:$(NAME)

fclean:
	rm -rf $(NAME)
re:fclean all