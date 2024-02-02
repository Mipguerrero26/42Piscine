/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:45:26 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/26 10:11:38 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] && (s1[count] != '\0' || s2[count] != '\0'))
	{
		count++;
	}
	if (s1[count] == '\0' && s2[count] == '\0')
		return (0);
	else
		return (s1[count] - s2[count]);
}
