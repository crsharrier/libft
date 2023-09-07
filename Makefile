NAME:= libft.a
CC:= gcc
CFLAGS:= -Wall -Wextra -Werror
MANDATORY:= memset bzero memcpy memmove memchr memcmp strlen strlcpy \
strlcat strchr strrchr strnstr strncmp atoi isalpha isdigit isalnum \
isascii isprint toupper tolower calloc strdup substr strjoin strtrim \
split itoa strmapi putchar_fd putstr_fd putendl_fd putnbr_fd striteri
SRCS := $(shell find ./sources -name ft_*.c)
TESTS := $(shell find ./tests -name test_*.c)
OBJS:= $(SRCS:.c=.o)
INCLUDES:= $(wildcard ./includes/*.h)
AR := ar rcs
RM := rm -f


all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

test $(MANDATORY): ./sources/ft_$(MANDATORY).c ./tests/test_$(MANDATORY).c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

$(SRCS):
	$(CC) $(CFLAGS) -I ./includes $@ -o $*

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -I ./includes -c $< -o $@

.PHONY: all clean fclean re test