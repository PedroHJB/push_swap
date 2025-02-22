NAME := push_swap

CFLAGS := -Wall -Wextra -Werror -g3
RM := rm -rf
LIB_PATH := ./libs/libft/
LIB_NAME := libft.a
BIN_PATH := ./bin/
SRC_PATH := ./src/
INCLUDES = ./includes/push_swap.h
SRCS := main.c check_args.c allocate_args.c utils.c sort_low.c push.c swap.c
OBJS := $(addprefix $(BIN_PATH), $(SRCS:%.c=%.o))
SRCS := $(addprefix $(SRC_PATH), $(SRCS))

all: $(BIN_PATH) $(LIB_PATH) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ $(LIB_PATH)$(LIB_NAME) -o $@
	
$(BIN_PATH)%.o: $(SRC_PATH)%.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIB_PATH):
	$(MAKE) -C $(LIB_PATH)

$(BIN_PATH):
	mkdir -p $@


valgrind: all
	$(VALGRIND) $(VALGRIND_FLAGS) ./$(NAME) $(PUSH_SWAP) 

clean:
	$(RM) $(BIN_PATH)
	$(MAKE) -C $(LIB_PATH) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIB_PATH) fclean

re: fclean all
	$(MAKE) -C $(LIB_PATH) re

.PHONY: all clean fclean re $(LIB_PATH)

