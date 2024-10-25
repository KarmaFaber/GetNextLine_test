# Variables:
NAME        := gnl_test
CC          := gcc
CFLAGS      := -Wall -Wextra -Werror -D BUFFER_SIZE=1  # Definimos BUFFER_SIZE (cambios en la defensa)
RM          := rm -rf
VALGRIND    := valgrind --leak-check=full --show-leak-kinds=all -s
#VALGRIND    := valgrind --leak-check=full --show-leak-kinds=all -s -q

SRCS        := get_next_line.c get_next_line_utils.c

# Test files:
TESTS_SRC   := main.c 1_test_text_own.c 2_test_1char.c 3_test_empty.c \
               4_test_lines_around_10.c 5_test_variable_nls.c 6_test_only_nl.c \
               7_test_giant_line.c 8_test_giant_line_nl.c 9_test_multiple_nl.c \
               10_test_one_line_no_nl.c 11_test_read_error.c 12_test_fd_cero.c \
			   13_invalid_fd.c

OBJS        := $(SRCS:.c=.o) $(TESTS_SRC:.c=.o)
GNL_DIR     := ../
INCLUDES    := -I$(GNL_DIR) -I.
VPATH       := $(GNL_DIR)

#rules:
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

valgrind: $(NAME)
	$(VALGRIND) ./$(NAME)
	
#Phony targets:
.PHONY: all clean fclean re valgrind
