Name = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =  parsing/parse.c \
	main.c utils/ft_atoi.c \
	utils/ft_split.c operations/push.c \
	algorithms/radix.c operations/rotate.c \
	operations/rra.c operations/sb.c \
	utils/ft_lstadd_front.c choose_algo.c \
	algorithms/sort_two.c operations/sa.c \
	algorithms/sort_three.c algorithms/sorted.c \
	operations/rotate_ab.c operations/rrr.c \
	operations/rrb.c

OBJ = $(SRCS:.c=.o)

all: $(Name)

$(Name): $(OBJ)
	$(CC) $(CFLAGS) -o $(Name) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(Name)

re : fclean all

.PHONY: all clean fclean