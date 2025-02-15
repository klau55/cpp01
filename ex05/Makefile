# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = harl

# Rules
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re