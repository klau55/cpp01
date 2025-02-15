# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = ex03

# Rules
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f  $(OBJ)

fclean: clean
	rm -f  $(TARGET)

re: fclean all

.PHONY: all clean fclean re