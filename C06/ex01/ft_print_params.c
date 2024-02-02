/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:31:09 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/29 19:47:47 by mpina-gu         ###   ########.fr       */
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

	count = 1;
	while (argc > count)
	{
		ft_putstr(argv[count]);
		write (1, "\n", 1);
		count++;
	}
	return (0);
}
