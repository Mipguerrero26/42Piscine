/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_word.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:23:35 by dahurtad          #+#    #+#             */
/*   Updated: 2022/08/30 14:43:22 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

//busca la clave / resultado
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (NULL);
}

//filtro para buscar en cualquier orden
char	*ft_str_strstr(int len, char *str, char *to_find)
{
	while ((str[len] != ' ' && str[len] != ':')
		|| (*(str - 1) >= '0' && *(str - 1) <= '9'))
	{
		str = ft_strstr((str + len), to_find);
	}
	return (str);
}

//saca el nombre a partir de la clave 2.0
char	*ft_fix_lenght_two(int i, int init, char *str)
{
	int		c;
	char	*word;

	c = 0;
	while (str[i] && str[i] != '\n' && (str[i] >= 32 && str[i] <= 126))
		i++;
	word = (char *)malloc((i - init + 1) * sizeof(char));
	if (word == NULL)
		return ("-1");
	while (init < i)
	{
		word[c] = str[init];
		c++;
		init++;
	}
	word[init] = '\0';
	return (word);
}

//saca el nombre a partir de la clave
char	*ft_fix_lenght(int len, char *str, char *to_find)
{
	int		i;
	int		init;

	i = 0;
	init = 0;
	if (str != NULL)
	{
		str = ft_str_strstr(len, str, to_find);
	}
	else
		return ("-1");
	while (str[i] && str[i] != '\n' && str[i] != ':')
		i++;
	if (str[i] != ':')
		return ("-1");
	i++;
	while (str[i] && str[i] != '\n' && (str[i] < 33 || str[i] > 126))
		i++;
	init = i;
	return (ft_fix_lenght_two(i, init, str));
}

//traductor
char	*ft_get_word(char *dic, char *to_find)
{
	char	*str;
	int		len;

	len = ft_strlen(to_find);
	str = ft_strstr(dic, to_find);
	return (ft_fix_lenght(len, str, to_find));
}
