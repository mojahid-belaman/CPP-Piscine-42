NAME = zombie

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	newZombie.cpp\
		randomChump.cpp\
		Zombie.cpp\
		main.cpp

HDR = Zombie.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HDR)
	clang++ $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean