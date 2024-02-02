/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:17:24 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/08/21 23:19:26 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_view(int **input, int **output, int n)
{
	int	i;
	int	j;

	ft_putchar('\n');
	ft_putchar('-');
	ft_putchar('|');
	ft_putstr(" ");
	i = 0;
	while (i < n)
	{
		ft_putchar(input[0][i] + '0');
		ft_putchar(' ');
		i++;
	}
	ft_putchar('|');
	ft_putchar('-');
	ft_putchar('\n');
	ft_putstr("-+---------+-");
	ft_putchar('\n');
	i = 0;
	while (i < n)
	{
		ft_putchar(input[2][i] + '0');
		ft_putchar('|');
		ft_putstr(" ");
		j = 0;
		while (j < n)
		{
			ft_putchar(output[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar('|');
		ft_putchar(input[3][i] + '0');
		i++;
		ft_putchar('\n');
	}
	ft_putstr("-+---------+-");
	ft_putchar('\n');
	ft_putchar('-');
	ft_putchar('|');
	ft_putstr(" ");
	i = 0;
	while (i < n)
	{
		ft_putchar(input[1][i] + '0');
		ft_putchar(' ');
		i++;
	}
	ft_putchar('|');
	ft_putchar('-');
	ft_putchar('\n');
}
