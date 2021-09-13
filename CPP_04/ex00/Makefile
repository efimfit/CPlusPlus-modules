SRC			=	main.cpp Animal.cpp Dog.cpp Cat.cpp
OBJ_PATH	=	obj/
OBJ			=	$(addprefix $(OBJ_PATH), $(SRC:.cpp=.o))
NAME		=	exec
RM			=	rm -rf
CFLAGS		=	clang++ -std=c++98
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