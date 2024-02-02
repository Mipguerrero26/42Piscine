/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:24:28 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/16 13:02:27 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	n = n + 48;
	write (1, &n, 1);
}

void	result(int a, int b, char space)
{
	ft_putchar(a / 10);
	ft_putchar(a % 10);
	write(1, &space, 1);
	ft_putchar(b / 10);
	ft_putchar(b % 10);
	if (a != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	space;

	a = 0;
	space = ' ';
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			result(a, b, space);
			b++;
		}
		a++;
	}
}
