NAME = contact

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = phonebock.cpp\
	  contact.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	@rm -rf $(NAME)

re:	fclean $(NAME)
