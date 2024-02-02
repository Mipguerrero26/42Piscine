/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:47:30 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/28 17:47:50 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	count1;

	count = 0;
	count1 = 0;
	while (dest[count] != '\0')
		count++;
	while (src[count1] != '\0' && count1 < nb)
	{
		dest[count] = src[count1];
		count++;
		count1++;
	}
	dest[count] = '\0';
	return (dest);
}

int	main(void)
{
	char dest[50] = "hola";
	char src[50] = "adios";
	//printf("%s", strncat(dest, src, 0));
	printf("\n");
	printf("%s", ft_strncat(dest, src, 0));
}
