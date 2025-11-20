CC = cc
FLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRCS = $(filter-out ft_lst%.c, $(wildcard ft_*.c))
BONUS_SRCS = $(wildcard ft_lst*.c)

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_OBJS:.c=.o)

HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

bonus: $(NAME) $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)
	@touch bonus


clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean:
	rm -f $(NAME) bonus

re: fclean all

.PHONY: all clean fclean re bonus
