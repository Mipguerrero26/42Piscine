/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:57:23 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/31 19:38:35 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;

	count = 0;
	while (count <= nb)
	{
		if ((count * count) == nb)
			return (count);
		else if (count >= 46340)
			return (0);
		count++;
	}
	return (0);
}
