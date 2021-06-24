NAME = karen

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC  = clang++

SRC = 	main.cpp\
		Karen.cpp

all: $(NAME)

$(NAME): $(src)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean $(NAME)