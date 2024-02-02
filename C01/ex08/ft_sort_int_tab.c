/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:52:07 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/18 22:25:28 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//corregir
void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	count2;
	int	aux;

	count = 0;
	count2 = 0;
	while (count <= (size * 2))
	{
		if (tab[count] > tab[count2])
		{
			aux = tab[count];
			tab[count] = tab[count2];
			tab[count2] = aux;
			count++;
		}
		else
		{
			count2++;
			count = 0;
		}
	}
}
