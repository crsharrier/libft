CC:= gcc
CFLAGS:= -Wall -Wextra -I ../includes
MANDATORY:= memset bzero memcpy memmove memchr memcmp strlen strlcpy \
strlcat strchr strrchr strnstr strncmp atoi isalpha isdigit isalnum \
isascii isprint toupper tolower calloc strdup substr strjoin strtrim \
split itoa strmapi putchar_fd putstr_fd putendl_fd putnbr_fd striteri
SRCS_DIR:= ../sources/
TEST_FILES:= $(wildcard ./*.c)
TEST_TARGETS:= $(patsubst ./%.c, %.out, $(TEST_FILES))
TEST_SRCS:= $(patsubst ./%.c, $(SRCS_DIR)ft_%.c, $(TEST_FILES))
INCLUDES:= $(wildcard ../includes/*.h)

all: $(TEST_TARGETS)

$(MANDATORY): %: %.out

%.out: ./%.c $(SRCS_DIR)ft_%.c $(INCLUDES)
	@$(CC) $(CFLAGS) -c $< -o $@ && \
	$(CC) $(CFLAGS) $(SRCS_DIR)ft_$*.c $(INCLUDES) testing.h $@ -o a.out && \
	./a.out && rm -f a.out && \
	make clean

clean:
	@rm -f *.out

.PHONY: all clean
