NAME:= libft.a
CC:= gcc
CFLAGS:= -Wall -Wextra -Werror
SRCS := $(shell find . -name 'ft_*.c')
OBJS:= $(SRCS:.c=.o)
TEST_DIR:= ./my_tests/
AR := ar rcs
RM := rm -f


all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

$(OBJS): %.o : %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(SRCS):
	$(CC) $(CFLAGS) $@ -o $* -I .

test:
	@make -sC $(TEST_DIR)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re test
