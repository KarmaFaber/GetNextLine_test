/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_test_fd_cero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolotar <mzolotar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:30:02 by mzolotar          #+#    #+#             */
/*   Updated: 2024/10/24 17:35:05 by mzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_test.h"

void	test_fd_cero(void)
{
	int		pipefd[2];
	char	*line;
	char	*test_data;

	test_data = "1Line_13456789012345678901234567890123456 1\n\n3line_3    3\n4line_4    4\n5\n";
	// Crea un pipe (pipefd[0] para lectura, pipefd[1] para escritura)
	if (pipe(pipefd) == -1)
	{
		perror("pipe error: -1");
		return ;
	}
	// Escribe los datos de prueba en el lado de escritura del pipe
	write(pipefd[1], test_data, strlen(test_data));
	// Cierra el lado de escritura, ya que no se necesita más
	close(pipefd[1]);
	// Usa el lado de lectura como si fuera el archivo descriptor (fd = 0)
	while ((line = get_next_line(pipefd[0])) != NULL)
	{
		printf("%s", line);
		free(line); // Libera la memoria devuelta por get_next_line
	}
	printf("\n");
	// Cierra el lado de lectura del pipe
	close(pipefd[0]);
}
