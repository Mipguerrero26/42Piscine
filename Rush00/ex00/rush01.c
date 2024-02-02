/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 19:09:44 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/14 16:57:39 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n);

// ASCII CODES: 42 ==> "*" / 47 ==> "/" / 92 ==> "backslash"
void	upper_limit(int count_x, int x)
{
	while (count_x <= x)
	{
		if (count_x == 1)
		{
			ft_putchar(47);
		}
		else if (count_x == x)
		{
			ft_putchar(92);
		}
		else
		{
			ft_putchar(42);
		}
		count_x ++;
	}
}

// ASCII CODES: 42 ==> "*" / 47 ==> "/" / 92 ==> "backslash"
void	lower_limit(int count_x, int x)
{
	while (count_x <= x)
	{
		if (count_x == 1)
		{
			ft_putchar(92);
		}
		else if (count_x == x)
		{
			ft_putchar(47);
		}
		else
		{
			ft_putchar(42);
		}
		count_x ++;
	}
}

// ASCII CODES: 32 ==> " " / 42 ==> "*"
void	content(int count_x, int x)
{
	while (count_x <= x)
	{
		if (count_x == 1 || count_x == x)
		{
			ft_putchar(42);
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
