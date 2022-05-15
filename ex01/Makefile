NAME	=	exe01
HEADER	=   span.hpp
SRCS	=   span.cpp main.cpp
OBJS	=	$(SRCS:.cpp=.o)
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
all: $(NAME)
%.o:%.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@
$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean:
	@rm -f $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re