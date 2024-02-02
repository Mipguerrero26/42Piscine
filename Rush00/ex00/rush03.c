/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 10:22:33 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/17 11:50:00 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n);

// ASCII CODES: 65 ==> "A"  / 66  ==> "B" / 67 ==> "C"
void	limits(int count_x, int x)
{
	while (count_x <= x)
	{
		if (count_x == 1)
		{
			ft_putchar(65);
		}
		else if (count_x == x)
		{
			ft_putchar(67);
		}
		else
		{
			ft_putchar(66);
		}
		count_x ++;
	}
}

// ASCII CODES: 32 ==> " " / 66 ==> "B"
void	content(int count_x, int x)
{
	while (count_x <= x)
	{
		if (count_x == 1 || count_x == x)
		{
			ft_putchar(66);
		}
		else
		{
			ft_putchar(32);
		}
		count_x ++;
	}
}

void	rush(int x, int y)
{
	int	count_x;
	int	count_y;

	count_x = 1;
	count_y = 1;
	if (x > 0 && y > 0)
	{
		while (count_y <= y)
		{
			if (count_y == 1 || count_y == y)
			{
				limits(count_x, x);
			}
			else
			{
				content(count_x, x);
			}
			write(1, "\n", 1);
			count_x = 1;
			count_y ++;
		}
	}
}
