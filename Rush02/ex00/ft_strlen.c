/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:54:46 by dahurtad          #+#    #+#             */
/*   Updated: 2022/08/30 15:16:34 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//cuenta la longitud de la cadena
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

//crea las cadenas de 1 seguido de x 0s
char	*ft_get_zeros(int n)
{
	char	*res;
	int		i;

	i = 1;
	n++;
	res = (char *)malloc((n + 1) * sizeof(char));
	res[0] = '1';
	while (i < n)
	{
		res[i] = '0';
		i++;
	}
	res[n] = '\0';
	return (res);
}
