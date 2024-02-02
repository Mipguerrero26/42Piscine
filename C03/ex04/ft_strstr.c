/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:20:30 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/26 10:14:46 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	count1;

	if (*to_find == '\0')
		return (str);
	count = 0;
	while (str[count])
	{
		count1 = 0;
		while (to_find[count1] == str[count + count1])
		{
			if (to_find[count1 + 1] == '\0')
				return (str + count);
			count1++;
		}
		count++;
	}
	return (0);
}
