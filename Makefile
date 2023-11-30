NAME:= libft.a
CC:= cc
CFLAGS:= -Wall -Wextra -Werror
MANDATORY:= memset bzero memcpy memmove memchr memcmp strlen strlcpy \
strlcat strchr strrchr strnstr strncmp atoi isalpha isdigit isalnum \
isascii isprint toupper tolower calloc strdup substr strjoin strtrim \
split itoa strmapi putchar_fd putstr_fd putendl_fd putnbr_fd striteri
BONUS:= lstadd_back lstadd_front lstclear lstdelone lstiter lstlast \
lstmap lstnew lstsize
OBJS := $(addsuffix .o, $(addprefix ft_, $(MANDATORY)))
BONUS_OBJS := $(addsuffix .o, $(addprefix ft_, $(BONUS)))
AR := ar rcs
RM := rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

ft_%.o : ft_%.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUS_OBJS)
	$(AR) $(NAME) $^

$(BONUS_OBJS): ft_%.o : ft_%.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

lists:
	cc my_tests/lists.c bonus/ft_*.c -I .

re: fclean all

.PHONY: all clean fclean re test
