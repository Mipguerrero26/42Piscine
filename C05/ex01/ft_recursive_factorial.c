/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:36:59 by mpina-gu          #+#    #+#             */
/*   Updated: 2022/08/31 19:37:52 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (factorial * ft_recursive_factorial(factorial - 1));
}
