/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:57:13 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/08/21 23:00:00 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_parser_check(int argc, char **argv)
{
	if (!(ft_input_num_check(argc)))
		return (0);
	else if (!(ft_check_16(argv)))
		return (0);
	else if (!(ft_input_check(argv)))
		return (0);
	else
		return (1);
}

int	main(int argc, char **argv)
{
	int	**input;
	int	**output;
	int	n;

	n = 4;
	if (!(ft_parser_check(argc, argv)))
		return (-1);
	input = ft_create_input_matrix(argv, n);
	if (!ft_check_n(input, n) || !ft_check_1(input, n))
		return (-1);
	output = ft_create_output_matrix(n);
	if (!(ft_load_all(input, output, n)))
		return (-1);
	ft_print_view(input, output, n);
	if (!(ft_solving(input, output, n)))
	{
		ft_print_view(input, output, n);
		return (-1);
	}
	return (0);
}
