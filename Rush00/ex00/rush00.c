/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:54:26 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/14 16:58:50 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n);

// ASCII CODES: 45 ==> "-" / 111 ==> "o"
void	limits(int count_x, int x)
{
	while (count_x <= x)
	{
		if (count_x == 1 || count_x == x)
		{
			ft_putchar(111);
		}
		else
		{
			ft_putchar(45);
		}
		count_x ++;
	}
}

// ASCII CODES: 32 ==> " " / 124 ==> "|"
void	content(int count_x, int x)
{
	while (count_x <= x)
	{
		if (count_x == 1 || count_x == x)
		{
			ft_putchar(124);
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
