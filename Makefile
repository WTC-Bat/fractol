NAME = fractol
SRC = "./src/"
HEAD = "./includes/"
FLAGS = -Wall -Werror -Wextra
LIBFTI = "./libft/"
LIBFT = -L ./libft/ -lft
MLXI = "./minilibx/"
MLX = -L ./minilibx/ -lmlx

SRCS = $(SRC)fractol.c $(SRC)julia_set.c

all: $(NAME)

$(NAME):
	make re -C ./libft/ && make clean -C ./libft/
	make re -C ./minilibx/
	gcc $(FLAGS) -I$(HEAD) -I$(LIBFTI) -I$(MLXI) $(SRCS) $(LIBFT) $(MLX) -framework OpenGL -framework AppKit -o fractol

dbg:
	make re -C ./libft/ && make clean -C ./libft/
	make re -C ./minilibx/
	gcc -g $(FLAGS) -I$(HEAD) -I$(LIBFTI) -I$(MLXI) $(SRCS) $(LIBFT) $(MLX) -framework OpenGL -framework AppKit -o fractol

clean:
	rm -f ./libft/libft.a
	make clean -C ./minilibx/

fclean: clean
	rm -f $(NAME)

re: fclean all
