NAME: =libft.a
CC:= cc
CFLAGS:= -Wall -Wextra -Werror
SRCS:= $(wildcard ../*.c)
OBJS:= $(SRCS:.c=.o)
HEADERS:= $(wildcard ./includes/*.h)
AR := ar rcs
RM := rm -f


all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) -I ./includes -c $< -o $@

.PHONY: all clean fclean re
