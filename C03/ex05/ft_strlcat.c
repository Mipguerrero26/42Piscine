/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:18:35 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/26 11:56:48 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	count1;

	count = 0;
	count1 = 0;
	while (dest[count] != '\0')
			count++;
	while (src[count1] != '\0' && count < size)
	{
		dest[count] = src[count1];
		count1++;
		count++;
	}
	return (count - 1);
}
