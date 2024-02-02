/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:53:15 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/24 18:34:39 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[count] != '\0')
	{
		if (i == 0 && (str[count] >= 'a' && str[count] <= 'z'))
		{
			str[count] = str[count] - 32;
			i++;
		}
		else if (i > 0 && (str[count] >= 'A' && str[count] <= 'Z'))
			str[count] = str[count] + 32;
		else if ((str[count] < '0') || (str[count] > '9' && str[count] < 'A')
			|| (str[count] > 'Z' && str[count] < 'a') || (str[count] > 'z'))
			i = 0;
		else
			i++;
		count++;
	}
	return (str);
}
