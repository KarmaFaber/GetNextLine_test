#ifndef GNL_TEST
# define GNL_TEST

# include "../get_next_line.h"
# include "color.h"

# include <fcntl.h>  // O_RDONLY
# include <stddef.h> //size_t
# include <stdio.h>  //printf
# include <stdlib.h> //malloc, free, NULL,
# include <string.h> // strlen, memcpy
# include <unistd.h> // open, read, write, close

void	test_one_line_no_nl(void);
void	test_read_error(void);
void	test_text_own(void);
void	test_1char(void);
void	test_empty(void);
void	test_lines_around_10(void);
void	test_variable_nls(void);
void	test_only_nl(void);
void	test_giant_line(void);
void	test_giant_line_nl(void);
void	test_multiple_nl(void);
void	test_fd_cero(void);

#endif
