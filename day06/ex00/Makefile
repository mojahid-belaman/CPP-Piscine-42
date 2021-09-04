NAME = convert

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC  = clang++

SRC =	main.cpp \
		Convert_char.cpp \
		Convert_int.cpp \
		Convert_float.cpp \
		Convert_double.cpp \
		Check_float.cpp \
		Check_double.cpp \
		Check_int.cpp


HDR =	Convert.hpp


OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)