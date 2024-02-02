/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:17:26 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/26 10:13:02 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	count1;

	count = 0;
	count1 = 0;
	while (dest[count] != '\0')
		count++;
	while (src[count1] != '\0')
	{
		dest[count] = src[count1];
		count1++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
