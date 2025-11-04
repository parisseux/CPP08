NAME = mutedAbomination
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
FILES = main.cpp
OBJ = main.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
