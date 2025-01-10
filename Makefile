CC = cc
CFLAGS = -Wall -Wextra -Werror -g

NAME = push_swap
NAME_B = checker

SRCS = parsing/parse.c \
	main.c utils/ft_atoi.c \
	utils/ft_split.c operations/push.c \
	algorithms/main_algo.c operations/rotate.c \
	operations/rra.c operations/sb.c \
	utils/ft_lstadd_front.c choose_algo.c \
	algorithms/utils.c operations/sa.c \
	algorithms/sort_three.c algorithms/sort_four.c \
	operations/rotate_ab.c operations/rrr.c \
	operations/rrb.c algorithms/sort_five.c  \
	utils/strs.c sorted.c parsing/checkvalid.c operations/ss.c

SRCSB = bonus/checker.c bonus/sorted.c bonus/checker_utils.c bonus/srcsb/ss.c \
		bonus/srcsb/sb.c bonus/srcsb/sa.c bonus/srcsb/rrr.c bonus/srcsb/rrb.c bonus/srcsb/rotate.c bonus/srcsb/rotate_ab.c \
		bonus/srcsb/push.c bonus/srcsb/parse.c bonus/utils_bonus/ft_atoi.c bonus/utils_bonus/ft_lstadd_front.c  bonus/utils_bonus/ft_split.c bonus/utils_bonus/strs.c bonus/srcsb/rra.c

OBJ = $(SRCS:.c=.o)
OBJB = $(SRCSB:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

bonus: $(NAME) $(NAME_B)

$(NAME_B): $(OBJB)
	$(CC) $(CFLAGS) -o $(NAME_B) $(OBJB)

clean:
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME) $(NAME_B)

re: fclean all

.PHONY: all clean fclean re bonus
