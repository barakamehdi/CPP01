CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address 

TARGET = zombie

SRCS = main.cpp Zombie.cpp zombieHarde.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = Zombie.hpp

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)


re: fclean all

.PHONY: all clean fclean re