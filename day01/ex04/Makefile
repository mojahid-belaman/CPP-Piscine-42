NAME = replace

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC  = clang++

SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:

fclean:
	rm -rf $(NAME)

re: fclean