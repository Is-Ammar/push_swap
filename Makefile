Name = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =  parsing/parse.c \
	main.c utils/ft_atoi.c \
	utils/ft_split.c operations/push.c \
	algorithms/radix.c operations/ra.c

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