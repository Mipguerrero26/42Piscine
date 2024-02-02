/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:27:56 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/18 21:12:29 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	aux;

	count = 0;
	while (count <= (size / 2))
	{
		aux = tab[count];
		tab[count] = tab[size - count - 1];
		tab[size - count - 1] = aux;
		count++;
	}
}
