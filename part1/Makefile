NAME :=        libft.a
PARENT_DIR		= $(shell dirname $(shell pwd))
SRCS :=        $(wildcard ../*.c)
OBJS :=        $(SRCS:.c=.o)

CC :=        cc
CFLAGS :=    -Wall -Wextra -Werror

AR :=        ar rcs

RM :=        rm -f

%.o:        %.c
			$(CC) $(CFLAGS) -I ./includes -c $< -o $@

$(NAME):    $(OBJS)
			$(AR) $@ $^

all:        $(NAME)

clean:
			$(RM) $(OBJS)

fclean:        clean
			$(RM) $(NAME)

re:            fclean all

.PHONY:        all clean fclean re
