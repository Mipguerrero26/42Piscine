/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 21:35:19 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/14 16:59:45 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n);

// ASCII CODES: 65 ==> "A" / 66 ==> "B"
void	upper_limit(int count_x, int x)
{
	while (count_x <= x)
	{
		if (count_x == 1 || count_x == x)
		{
			ft_putchar(65);
		}
		else
		{
			ft_putchar(66);
		}
		count_x ++;
	}
}

// ASCII CODES: 66 ==> "B" / 67 ==> "C"
void	lower_limit(int count_x, int x)
{
	while (count_x <= x)
	{
		if (count_x == 1 || count_x == x)
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

void	line_type(int count_x, int count_y, int x, int y)
{
	if (count_y == 1)
	{
		upper_limit(count_x, x);
	}
	else if (count_y == y)
	{
		lower_limit(count_x, x);
	}
	else
	{
		content(count_x, x);
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
			line_type(count_x, count_y, x, y);
			write(1, "\n", 1);
			count_x = 1;
			count_y ++;
		}
	}
}
