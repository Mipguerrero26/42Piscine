/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:09:24 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/08/21 23:10:44 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_load_up(int **input, int **output, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < n)
	{
		if (input[0][j] == n)
		{
			i = 0;
			while (i < n)
			{
				if (output[j][i] != 0 && output[j][i] != (i + 1))
					return (0);
				else
					output[j][i] = i + 1;
				i++;
			}
		}
		if (input[0][j] == 1)
			output[0][j] = n;
		j++;
	}
	return (1);
}

int	ft_load_down(int **input, int **output, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < n)
	{
		if (input[1][j] == n)
		{
			i = 0;
			while (i < n)
			{
				if (output[n - i - 1][j] != 0 && output[n - i - 1][j] != (i + 1))
					return (0);
				else
					output[n - i - 1][j] = i + 1;
				i++;
			}
		}
		if (input[1][j] == 1)
			output[n - i - 1][j] = n;
		j++;
	}
	return (1);
}

int	ft_load_left(int **input, int **output, int n)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (j < n)
	{
		if (input[2][j] == n)
		{
			i = 0;
			while (i < n)
			{
				if (output[j][i] != 0 && output[j][i] != (i + 1))
					return (0);
				else
					output[j][i] = i + 1;
				i++;
			}
		}
		if (input[2][j] == 1)
			output[2][i] = n;
		j++;
	}
	return (1);
}

int	ft_load_right(int **input, int **output, int n)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (j < n)
	{
		if (input[3][j] == n)
		{
			i = 0;
			while (i < n)
			{
				if (output[j][n - i - 1] != 0 && output[j][n - i - 1] != (i + 1))
					return (0);
				else
					output[j][n - i - 1] = i + 1;
				i++;
			}
		}
		if (input[3][j] == 1)
			output[j][n - i - 1] = n;
		j++;
	}
	return (1);
}

int	ft_load_all(int **input, int **output, int n)
{
	int	result;

	result = 1;
	if (!(ft_load_up(input, output, n)))
		result = 0;
	else if (!(ft_load_down(input, output, n)))
		result = 0;
	else if (!(ft_load_left(input, output, n)))
		result = 0;
	else if (!(ft_load_right(input, output, n)))
		result = 0;
	if (result == 0)
	{
		ft_putstr("It's not possible to solve the puzzle. ERROR: load");
		return (0);
	}
	return (1);
}
