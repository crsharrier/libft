NAME:= libft.a
CC:= cc
CFLAGS:= -Wall -Wextra -Werror
INCLUDES_DIR:= ./includes

MANDATORY_PREFIX:= ./srcs/mandatory/ft_
BONUS_PREFIX:= ./srcs/bonus/ft_

MANDATORY:= memset bzero memcpy memmove memchr memcmp strlen strlcpy \
strlcat strchr strrchr strnstr strncmp atoi isalpha isdigit isalnum \
isascii isprint toupper tolower calloc strdup substr strjoin strtrim \
split itoa strmapi putchar_fd putstr_fd putendl_fd putnbr_fd striteri

BONUS:= lstadd_back lstadd_front lstclear lstdelone lstiter lstlast \
lstmap lstnew lstsize 

OBJS := $(addsuffix .o, $(addprefix $(MANDATORY_PREFIX), $(MANDATORY)))
BONUS_OBJS := $(addsuffix .o, $(addprefix $(BONUS_PREFIX), $(BONUS)))

# Extra ===========================================

GNL_PREFIX:= ./srcs/extra/get_next_line/
GNL:= get_next_line get_next_line_utils \

PRINTF_PREFIX:= ./srcs/extra/ft_printf/
PRINTF:= ft_printf parse_flags \
	conversions/conversions1 conversions/conversions2 \
	conversions/ft_ullong_atoi conversions/ft_ullong_itoa \
	conversions/ft_unsigned_atoi conversions/ft_unsigned_itoa \
	conversions/hex_conversion

EXTRA_OBJS := $(addsuffix .o, $(addprefix $(GNL_PREFIX), $(GNL))) \
	$(addsuffix .o, $(addprefix $(PRINTF_PREFIX), $(PRINTF)))

# =================================================

AR := ar rcs
RM := rm -f

all: $(NAME) bonus extra

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

$(EXTRA_PREFIX)%.o: $(EXTRA_PREFIX)%.c $(INCLUDES_DIR)/*.h
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES_DIR)

#=================================

clean:
	$(RM) $(OBJS) $(BONUS_OBJS) $(EXTRA_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re test bonus extra
