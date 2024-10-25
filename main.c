/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolotar <mzolotar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:56:04 by mzolotar          #+#    #+#             */
/*   Updated: 2024/10/25 11:34:28 by mzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "gnl_test.h"

// gcc -Wall -Wextra -Werror main.c ../get_next_line.c ../get_next_line_utils.c -o gnl_pruebas
//gcc -Wall -Wextra -Werror 1_test_text_own.c main.c -o gnl_pruebas
//valgrind --leak-check=full ./gnl_pruebas
//valgrind --leak-check=full --show-leak-kinds=all ./gnl_pruebas

//OTRAS PRUEBAS:
// gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 main.c get_next_line.c get_next_line_utils.c -o gnl_pruebas
// gcc -Wall -Wextra -Werror -D BUFFER_SIZE=1024 main.c get_next_line.c get_next_line_utils.c -o gnl_pruebas
// gcc -Wall -Wextra -Werror -D BUFFER_SIZE=0 main.c get_next_line.c get_next_line_utils.c -o gnl_pruebas

// gcc -Wall -Wextra -Werror -D BUFFER_SIZE=1 main.c get_next_line.c get_next_line_utils.c -o gnl_pruebas
// gcc -Wall -Wextra -Werror -D BUFFER_SIZE=9999 main.c get_next_line.c get_next_line_utils.c -o gnl_pruebas
// gcc -Wall -Wextra -Werror -D BUFFER_SIZE=100000000 main.c get_next_line.c get_next_line_utils.c -o gnl_pruebas

//gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c -o gnl_pruebas


int main (void)
{
    //0:
    printf(ANSI_COLOR_MAGENTA "----BUFFER_SIZE: %d----\n"ANSI_COLOR_RESET, BUFFER_SIZE);
    
    //1:
    printf(ANSI_COLOR_MAGENTA "----1_test_text_own----\n"ANSI_COLOR_RESET);
    test_text_own();       
    printf(ANSI_COLOR_MAGENTA "--------------------------\n"ANSI_COLOR_RESET);

    //2:
    printf(ANSI_COLOR_MAGENTA "----2_test_1char----\n"ANSI_COLOR_RESET);
    test_1char();
    printf(ANSI_COLOR_MAGENTA "--------------------------\n"ANSI_COLOR_RESET);
    
    //3:
    printf(ANSI_COLOR_MAGENTA "----3_test_empty----\n"ANSI_COLOR_RESET);
    test_empty();
    printf(ANSI_COLOR_MAGENTA "--------------------------\n"ANSI_COLOR_RESET);

    //4:
    printf(ANSI_COLOR_MAGENTA "----4_test_lines_around_10----\n"ANSI_COLOR_RESET);
    test_lines_around_10(); 
    printf(ANSI_COLOR_MAGENTA "--------------------------\n"ANSI_COLOR_RESET);

    //5:
    printf(ANSI_COLOR_MAGENTA "----5_test_variable_nls----\n"ANSI_COLOR_RESET);
    test_variable_nls();
    printf(ANSI_COLOR_MAGENTA "--------------------------\n"ANSI_COLOR_RESET);  
    
    //6:
    printf(ANSI_COLOR_MAGENTA "----6_test_only_nl----\n"ANSI_COLOR_RESET);
    test_only_nl();
    printf(ANSI_COLOR_MAGENTA "--------------------------\n"ANSI_COLOR_RESET);
  
    //7:
    printf(ANSI_COLOR_MAGENTA "-----7_test_giant_line-----\n"ANSI_COLOR_RESET);
    test_giant_line();
    printf(ANSI_COLOR_MAGENTA "--------------------------\n"ANSI_COLOR_RESET);

    //8:
    printf(ANSI_COLOR_MAGENTA "----8_test_giant_line_nl----\n"ANSI_COLOR_RESET);
    test_giant_line_nl();
    printf(ANSI_COLOR_MAGENTA "--------------------------\n"ANSI_COLOR_RESET);

    //9:
    printf(ANSI_COLOR_MAGENTA"----9_test_multiple_nl----\n"ANSI_COLOR_RESET);
    test_multiple_nl();
    printf(ANSI_COLOR_MAGENTA"--------------------------\n"ANSI_COLOR_RESET);

    //10:
    printf(ANSI_COLOR_MAGENTA "----10_test_one_line_no_nl----\n"ANSI_COLOR_RESET);
    test_one_line_no_nl();
    printf(ANSI_COLOR_MAGENTA "--------------------------\n"ANSI_COLOR_RESET);

    //11:
    printf(ANSI_COLOR_MAGENTA "----11_test_read_error----\n"ANSI_COLOR_RESET);
    test_read_error();
    printf(ANSI_COLOR_MAGENTA "--------------------------\n"ANSI_COLOR_RESET);

    //12:
    printf(ANSI_COLOR_MAGENTA "----12_test_fd_cero---\n"ANSI_COLOR_RESET);
    test_fd_cero();
    printf(ANSI_COLOR_MAGENTA "--------------------------\n"ANSI_COLOR_RESET);

    //13
    printf(ANSI_COLOR_MAGENTA "----13_invalid_fd---\n"ANSI_COLOR_RESET);
    invalid_fd();
    printf(ANSI_COLOR_MAGENTA "--------------------------\n"ANSI_COLOR_RESET);

    return (0);
}



