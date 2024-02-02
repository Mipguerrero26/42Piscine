/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:02:27 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/08/21 23:03:20 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_input_num_check(int n)
{
	int	i;

	i = 0;
	if (n != 2)
	{
		ft_putstr("Error with number of inputs\n");
		return (0);
	}
	return (1);
}

int	ft_input_check(char **v)
{
	int	i;

	i = 0;
	while (v[1][i] != '\0')
	{
		if (i % 2 == 0)
		{
			if ((v[1][i] == 0) || (v[1][i] >= '5' && v[1][i] <= '9'))
			{
				ft_putstr("Error, the number must be between 1 and 4\n");
				return (0);
			}
			else if (!(v[1][i] >= '0' && v[1][i] <= '9'))
			{
				ft_putstr("Error, input can contain only positive numbers\n");
				return (0);
			}
		}
		else if (!(v[1][i] == ' '))
			ft_putstr("Error, it must be a single digit\n");
		i++;
	}
	return (1);
}

int	ft_check_16(char **v)
{
	if (ft_strlen(v[1]) != 31)
	{
		ft_putstr("Error, need 16 digits\n");
		return (0);
	}
	else
		return (1);
}

int	ft_check_n(int **input, int n)
{
	int	i;
	int	j;
	int	check_n;

	i = 0;
	while (i < n)
	{
		j = 0;
		check_n = 0;
		while (j < n)
		{
			if (input[i][j] == n && check_n == 0)
				check_n = 1;
			else if (input[i][j] == n && check_n == 1)
			{
				ft_putstr("It's not possible to solve the puzzle.");
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_1(int **input, int n)
{
	int	i;
	int	j;
	int	check_1;

	i = 0;
	while (i < n)
	{
		j = 0;
		check_1 = 0;
		while (j < n)
		{
			if (input[i][j] == 1 && check_1 == 0)
				check_1 = 1;
			else if (input[i][j] == 1 && check_1 == 1)
			{
				ft_putstr("It's not possible to solve the puzzle.");
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
