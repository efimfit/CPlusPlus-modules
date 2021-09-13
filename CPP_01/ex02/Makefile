SRC			=	main.cpp
OBJ_PATH	=	obj/
OBJ			=	$(addprefix $(OBJ_PATH), $(SRC:.cpp=.o))
NAME		=	exec
RM			=	rm -rf
CFLAGS		=	clang++ -Wall -Wextra -Werror -std=c++98

$(OBJ_PATH)%.o: %.cpp
	@mkdir -p $(OBJ_PATH)
	$(CFLAGS) -c $< -o $@

all: $(NAME)
$(NAME): $(OBJ)
	$(CFLAGS) $(OBJ) -o $(NAME)
clean:
	rm -rf $(OBJ) $(OBJ_PATH)
fclean: clean
	rm -rf $(NAME)
re:	fclean all

.PHONY: all clean fclean re