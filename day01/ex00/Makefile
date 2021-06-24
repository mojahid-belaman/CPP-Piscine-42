NAME = zombie

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC  = clang++

SRC = 	newZombie.cpp\
		randomChump.cpp\
		Zombie.cpp\
		main.cpp

all: $(NAME)

$(NAME): $(src)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean $(NAME)