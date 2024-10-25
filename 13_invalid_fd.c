/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_invalid_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolotar <mzolotar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:24:14 by mzolotar          #+#    #+#             */
/*   Updated: 2024/10/25 11:25:02 by mzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "gnl_test.h"

void	invalid_fd(void)
{
    int fd;
    char *line;

    // Descriptor de archivo arbitrario (42)
    fd = 42;

    // Intentar leer desde un descriptor de archivo no válido
    line = get_next_line(fd);

    // Verificar si la función devuelve NULL o -1 (dependiendo de cómo se maneje en tu código)
    if (line == NULL)
        printf("Test passed: get_next_line returned NULL for invalid fd %d\n", fd);
    else
        printf("Test failed: get_next_line should return NULL for invalid fd %d\n", fd);

    // Cerrar el descriptor si es necesario
    close(fd);

	return;
}
