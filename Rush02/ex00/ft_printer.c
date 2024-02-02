/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:12:22 by dahurtad          #+#    #+#             */
/*   Updated: 2022/08/30 14:49:19 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

//compara cadenas para ver si hay algun error
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

//valida si la solucion es correcta
int	ft_validate_solution(char **res)
{
	int	i;

	i = 0;
	while (res[i] != NULL)
	{
		if (ft_strcmp(res[i], "-1") == 0)
			return (0);
		i++;
	}
	return (1);
}

//imprime resultado
void	ft_printer(char **res)
{
	int	i;
	int	j;

	i = 0;
	if (ft_validate_solution(res))
	{
		while (res[i] != NULL)
		{
			j = 0;
			while (res[i][j])
			{
				write(1, &res[i][j], 1);
				j++;
			}
			free(res[i]);
			if (res[i + 1] != NULL)
				write(1, " ", 1);
			i++;
		}
	}
	else
		write(1, "Dict Error\n", 11);
}
