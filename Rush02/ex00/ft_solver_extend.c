/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver_extend.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:26:58 by dahurtad          #+#    #+#             */
/*   Updated: 2022/08/30 14:37:54 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_get_word(char *str, char *to_find);

char	**ft_solver_two(char *data, char *n, char **res, char *concat)
{
	if (n[1] != '0')
	{
		concat[0] = n[1];
		concat[1] = '0';
		concat[2] = '\0';
        //ir a ft_get_word
		*res = ft_get_word(data, concat);
		res++;
		if (n[2] != '0')
		{
			concat[0] = n[2];
			concat[1] = '\0';
            //ir a ft_get_word
			*res = ft_get_word(data, concat);
			res++;
		}
	}
	else if (n[2] > '0')
	{
		concat[0] = n[2];
		concat[1] = '\0';
        //ir a ft_get_word
		*res = ft_get_word(data, concat);
		res++;
	}
	return (res);
}
