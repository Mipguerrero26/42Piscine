/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:13:30 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/26 11:18:37 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	n = n + 48;
	write (1, &n, 1);
}

void	ft_putnbr(int nb)
{
	char	character;

	character = '-';
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar(8);
	}
	else if (nb < 0)
	{
		write(1, &character, 1);
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10);
		}
		else
		{
			ft_putchar(nb);
		}
	}
}
