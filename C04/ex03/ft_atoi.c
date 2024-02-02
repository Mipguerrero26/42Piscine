/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 09:23:57 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/29 17:18:27 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	count;
	int	sign;
	int	num;

	count = 0;
	sign = 1;
	num = 0;
	while (str[count] == ' ' || str[count] == '\f' || str[count] == '\n'
		|| str[count] == '\r' || str[count] == '\t' || str[count] == '\v')
		count++;
	while (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	while ((str[count] >= '0' && str[count] <= '9'))
	{
		num = num + (int)str[count] - 48;
		if (str[count + 1] >= '0' && str[count + 1] <= '9')
			num = num * 10;
		count++;
	}
	return (num * sign);
}
