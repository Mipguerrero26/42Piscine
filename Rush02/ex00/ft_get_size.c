/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:19:27 by dahurtad          #+#    #+#             */
/*   Updated: 2022/08/30 14:16:07 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

//calcula el tamaño del diccionario
int	ft_get_size(char *path)
{
	int		size;
	int		fd;
	char	*data;

	size = 1;
	fd = open(path, O_RDONLY);
	if (fd >= 0)
	{
		data = (char *)malloc(2 * sizeof(char));
		while (read(fd, data, 1) > 0)
			size++;
		close(fd);
		free(data);
		return (size);
	}
	return (-1);
}

//lee y guarda el diccionario
char	*ft_read(char *path)
{
	int		fd;
	char	*data;
	int		size;

	size = ft_get_size(path);
	if (size > 0)
	{
		fd = open(path, O_RDONLY);
		if (fd >= 0)
		{
			data = (char *)malloc((size) * sizeof(char));
			if (read(fd, data, size) < 0)
				return (NULL);
			close(fd);
			return (data);
		}
	}
	return (NULL);
}
