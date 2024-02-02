/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solving.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:15:51 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/08/21 23:16:18 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_not_double(int **output, int row, int col, int n, int num)
{
	int	x;

	x = 0;
	while (x < n)
	{
		if (output[row][x] == num)
			return (0);
		x++;
	}
	x = 0;
	while (x < n)
	{
		if (output[x][col] == num)
			return (0);
		x++;
	}
	return (1);
}

int	ft_solve(int **input, int **output, int row, int col, int n)
{
	int	num;

	num = 1;
	if (row == n - 1 && col == n)
		return (1);
	if (col == n)
	{
		row++;
		col = 0;
	}
	if (output[row][col] > 0)
		return (ft_solve(input, output, row, col + 1, n));
	while (num <= n)
	{
		if (ft_not_double(output, row, col, n, num))
		{
			output[row][col] = num;
			if (ft_solve(input, output, row, col + 1, n))
				return (1);
		}
		num++;
	}
	output[row][col] = 0;
	return (0);
}

int	ft_solving(int **input, int **output, int n)
{
	int	position[2];

	position[0] = 0;
	position[1] = 0;
	if (ft_solve(input, output, 0, 0, n))
		ft_print_view(input, output, n);
	else
		return (0);
	return (1);
}
