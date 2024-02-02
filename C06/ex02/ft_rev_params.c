/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:56:57 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/29 19:59:24 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write (1, &str[count], 1);
		count++;
	}
}

int	main(int argc, char **argv)
{
	int	count;

	count = argc - 1;
	while (count > 0)
	{
		ft_putstr(argv[count]);
		write (1, "\n", 1);
		count--;
	}
	return (0);
}
