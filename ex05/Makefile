CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = harl

SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

HEADERS = Harl.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re