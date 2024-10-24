/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9_test_multiple_nl.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolotar <mzolotar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:53:48 by mzolotar          #+#    #+#             */
/*   Updated: 2024/10/05 11:03:18 by mzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_test.h"

void	test_multiple_nl(void)
{
	int fd;
	char *line;

	fd = open("9_multiple_nl.txt", O_RDONLY);
	// Manejo de errores al abrir
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return ;
	}

	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		printf("%s", line);
		free(line);
		line = NULL;
	}
	printf("\n");
	// Manejo de errores al cerrar
	if (close(fd) == -1)
	{
		perror("Error al cerrar el archivo");
		return ;
	}
	return;
}