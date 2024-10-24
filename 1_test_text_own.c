/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_test_text_own.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolotar <mzolotar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:56:09 by mzolotar          #+#    #+#             */
/*   Updated: 2024/10/05 11:02:28 by mzolotar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_test.h"

void	test_text_own(void)
{
	int		fd;
	char	*line;

	fd = open("1_text_own.txt", O_RDONLY);
	// Manejo de errores al abrir
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return ;
	}
	/*while (1)
		-> es un bucle infinito que se utoliza para leer archivo de manera continua en bloques
	hasta que se detecte el final del archivo (readed_bytes ==0) o ocurra un error (readed_bytes < 0),
	en cuyo caso el bucle se ropme con un break ; Es una forma de leer archivos sin saber de antemano cuantos bloques
	habra en dicho archivo. */
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
