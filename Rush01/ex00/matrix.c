/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:11:46 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/08/21 23:13:35 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**ft_create_input_matrix(char **v, int n)
{
	int	i;
	int	**input;
	int	j;
	int	k;

	i = 0;
	input = (int **)malloc(n * 8);
	while (i < n)
	{
		input[i] = (int *)malloc(n * 4);
		i++;
	}
	i = 0;
	while (v[1][i] != '\0')
	{
		if (i % 2 == 0)
		{
			j = i / (n * 2);
			k = (i / 2) % n;
			input[j][k] = v[1][i] - '0';
		}
		i++;
	}
	return (input);
}

void	ft_print_matrix(int **matrix, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			ft_putchar(matrix[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
	ft_putchar('\n');
}

int	**ft_create_output_matrix(int n)
{
	int	i;
	int	j;
	int	**output;

	output = (int **)malloc(n * 8);
	i = 0;
	while (i < n)
	{
		output[i] = (int *)malloc(n * 4);
		j = 0;
		while (j < n)
		{
			output[i][j] = 0;
			j++;
		}
		i++;
	}
	return (output);
}
