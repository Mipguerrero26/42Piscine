/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:26:58 by dahurtad          #+#    #+#             */
/*   Updated: 2022/08/30 14:10:17 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

//comprueba que solo haya numeros
int	ft_validate_in(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

//evita los ceros de la izquierda y comprueba que solo haya numeros
char	*ft_take_zeros_out(char *str)
{
	int	len;

	if (ft_validate_in(str))
	{
        //ir a ft_strlen
		len = ft_strlen(str);
		if (len >= 1)
		{
			while (str[0] == '0' && len > 1)
			{
				str++;
				len--;
			}
		}
		return (str);
	}
	return ("!");
}
