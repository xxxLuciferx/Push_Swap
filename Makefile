# LIBFT = libft/libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra -g

RM = rm -rf

# ${LIBFT} : libft
# 			make -C libft

all: push_swap.c
		${CC} push_swap.c ft_split.c ft_strjoin.c ft_atoi.c ft_lstadd_back.c ft_lstnew.c check_args_valid.c \
			swaps.c magic.c list_to_stack.c ft_lstsize_bonus.c ft_lstadd_front_bonus.c make_string_and_split.c -o push_swap ${CFLAGS}


clean: all
		make clean
		${RM} push_swap
fclean: all
		make fclean
		${RM} push_swap