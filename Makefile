NAME:= libft.a
CC:= cc
CFLAGS:= -Wall -Wextra -Werror
MANDATORY:= memset bzero memcpy memmove memchr memcmp strlen strlcpy \
strlcat strchr strrchr strnstr strncmp atoi isalpha isdigit isalnum \
isascii isprint toupper tolower calloc strdup substr strjoin strtrim \
split itoa strmapi putchar_fd putstr_fd putendl_fd putnbr_fd striteri
BONUS:= lstadd_back lstadd_front lstclear lstdelone lstiter lstlast \
lstmap lstnew lstsize 
EXTRA:= lstget strlist free_strlist
OBJS := $(addsuffix .o, $(addprefix ft_, $(MANDATORY)))
BONUS_OBJS := $(addsuffix .o, $(addprefix ft_, $(BONUS)))
EXTRA_OBJS := $(addsuffix .o, $(addprefix ft_, $(EXTRA)))
AR := ar rcs
RM := rm -f

all: $(NAME) bonus extra

$(NAME): $(OBJS)
	$(AR) $@ $^

ft_%.o : ft_%.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

#=================================

bonus: $(BONUS_OBJS)
	$(AR) $(NAME) $^

$(BONUS_OBJS): ft_%.o : ft_%.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

#=================================

extra: $(EXTRA_OBJS)
	$(AR) $(NAME) $^

$(EXTRA_OBJS): ft_%.o : ft_%.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

#=================================

test:
	make && cc -g tests/test_strlist.c ft_strdup.c ft_free_strlist.c ft_strlist.c -I . && ./a.out 

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re test bonus extra
