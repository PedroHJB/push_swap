
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3

NAME = push_swap

SRCS = src/main.c \

OBJS = $(SRCS:.c=.o)

HEADERS = push_swap.h

LIBFT = libs/libft/libft.a

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIBFT)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@make -C libs/libft
	@echo "Library Compiled."

clean:
	rm -f $(OBJS)
	@make clean -C libs/libft

fclean: clean
	rm -f $(NAME)
	@make fclean -C libs/libft

re: fclean all

val: all
	@valgrind --leak-check=full \
	--show-reachable=yes \
	--track-fds=yes \
	--show-leak-kinds=all -s \
	--track-origins=yes \
	--log-file=$(VALGRIND_LOG) \
	./$(NAME)
	@cat $(VALGRIND_LOG)

.PHONY: all clean fclean re val