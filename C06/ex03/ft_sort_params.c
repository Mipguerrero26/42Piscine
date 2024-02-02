/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:01:53 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/31 09:36:52 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] != '\0' || s2[count] != '\0')
	{
		if (s1[count] < s2[count])
			return (-1);
		else if (s1[count] > s2[count])
			return (1);
		count++;
	}
	return (0);
}

void	ft_print(int argc, char **argv)
{
	int	count;
	int	count_str;

	count = 1;
	while (count < argc)
	{
		count_str = 0;
		while (argv[count][count_str] != '\0')
		{
			write (1, &argv[count][count_str], 1);
			count_str++;
		}
		write (1, "\n", 1);
		count++;
	}
}

int	main(int argc, char **argv)
{
	int		count;
	int		filter;
	char	*aux;

	filter = 1;
	while (filter)
	{
		filter = 0;
		count = 1;
		while (count < argc - 1)
		{
			if (ft_strcmp(argv[count], argv[count + 1]) > 0)
			{
				aux = argv[count];
				argv[count] = argv[count + 1];
				argv[count + 1] = aux;
				filter = 1;
			}
			count++;
		}
	}
	ft_print(argc, argv);
	return (0);
}
