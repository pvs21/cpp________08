NAME	=	exe02
HEADER	=   MutantStack.hpp
SRCS	=   MutantStack.cpp main.cpp
OBJS	=	$(SRCS:.cpp=.o)
CC		=	clang++
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