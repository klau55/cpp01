# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = ex02

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