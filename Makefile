NAME:= libft.a
CC:= cc
CFLAGS:= -Wall -Wextra -Werror
MANDATORY:= memset bzero memcpy memmove memchr memcmp strlen strlcpy \
strlcat strchr strrchr strnstr strncmp atoi isalpha isdigit isalnum \
isascii isprint toupper tolower calloc strdup substr strjoin strtrim \
split itoa strmapi putchar_fd putstr_fd putendl_fd putnbr_fd striteri
BONUS:= lstadd_back lstadd_front lstclear lstdelone lstiter lstlast \
lstmap lstnew lstsize 

MANDATORY_PREFIX:= ./srcs/mandatory/ft_
BONUS_PREFIX:= ./srcs/bonus/ft_

INCLUDES_DIR:= ./includes

OBJS := $(addsuffix .o, $(addprefix $(MANDATORY_PREFIX), $(MANDATORY)))
BONUS_OBJS := $(addsuffix .o, $(addprefix $(BONUS_PREFIX), $(BONUS)))

EXTRA:= get_next_line

AR := ar rcs
RM := rm -f

all: $(NAME) bonus

$(NAME): $(OBJS)
	$(AR) $@ $^

$(MANDATORY_PREFIX)%.o: $(MANDATORY_PREFIX)%.c $(INCLUDES_DIR)/libft.h
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES_DIR)

#=================================

bonus: $(BONUS_OBJS)
	$(AR) $(NAME) $^

$(BONUS_PREFIX)%.o: $(BONUS_PREFIX)%.c $(INCLUDES_DIR)/libft.h
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES_DIR)

#=================================

extra: $(EXTRA_OBJS)
	$(AR) $(NAME) $^


#=================================

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re test bonus extra
