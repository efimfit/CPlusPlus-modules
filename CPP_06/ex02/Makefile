SRC			=	main.cpp A.cpp B.cpp C.cpp Base.cpp
OBJ_PATH	=	obj/
OBJ			=	$(addprefix $(OBJ_PATH), $(SRC:.cpp=.o))
NAME		=	exec
RM			=	rm -rf
CFLAGS		=	clang++ -Wall -Wextra -Werror -std=c++98
INCLUDE		=	./
$(OBJ_PATH)%.o: %.cpp
	@mkdir -p $(OBJ_PATH)
	$(CFLAGS) -I$(INCLUDE) -c $< -o $@

all: $(NAME)
$(NAME): $(OBJ)
	$(CFLAGS) -I$(INCLUDE) $(OBJ) -o $(NAME)
clean:
	rm -rf $(OBJ) $(OBJ_PATH)
fclean: clean
	rm -rf $(NAME)
re:	fclean all

.PHONY: all clean fclean re