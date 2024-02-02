/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:14:14 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/31 19:37:42 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;
	int	factorial;

	count = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (count <= nb)
		{
			factorial *= count;
			count++;
		}
		return (factorial);
	}
}
