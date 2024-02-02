/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 21:01:29 by jorgerod          #+#    #+#             */
/*   Updated: 2022/08/30 15:16:36 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_get_word(char *str, char *to_find);
int		ft_strlen(char *str);
char	*ft_get_zeros(int n);
char	**ft_solver_two(char *data, char *n, char **res, char *concat);

//traduce las unidades (pone los 100000000, 10000, 100,...)
char	**ft_solver_extra(char *data, char *n, char **res, char *concat)
{
	if (n[0] > '0')
	{
		concat[0] = n[0];
        //ir a ft_get_word
		*res = ft_get_word(data, concat);
		res++;
        //ir a ft_get_word
		*res = ft_get_word(data, "100");
		res++;
	}
	if (n[1] == '1')
	{
		concat[0] = n[1];
		concat[1] = n[2];
		concat[2] = '\0';
        //ir a ft_get_word
		*res = ft_get_word(data, concat);
		res++;
	}
	else
	{	
        //ir a ft_solver_extend
		res = ft_solver_two(data, n, res, concat);
	}
	return (res);
}

//traduce los grupos de numeros ???
void	ft_solver_three(char *data, char *n, int *nz, char **res)
{
	char	*concat;

	concat = (char *)malloc(3 * sizeof(char));
	concat[1] = '\0';
	if (!(n[0] == '0' && n[1] == '0' && n[2] == '0'))
	{
		res = ft_solver_extra(data, n, res, concat);
		if (nz[0] != 0)
		{
            //ir a ft_get_word      //ir a ft_strlen
			*res = ft_get_word(data, ft_get_zeros(nz[0]));
			res++;
		}
	}
	else if (nz[0] == 0 && !nz[1])
	{
        //ir a ft_get_word
		*res = ft_get_word(data, "0");
		res++;
	}
	free(concat);
}

//prepara para traducir el grupo de numeros de mas a la izquierda ???
void	ft_solver_second(char *data, char **nb, int *flag, char ***ptr)
{
	char	*temp;

	temp = (char *)malloc(4 * sizeof(char));
	temp[0] = '0';
	temp[1] = '0';
	temp[3] = '\0';
	if (flag[3] % 3 == 1)
	{	
		temp[2] = nb[0][0];
		flag[0] = (flag[3] -1);
		ft_solver_three(data, temp, flag, *ptr);
		flag[2] = flag[2] + 1;
		*nb += 1;
	}
	else if (flag[3] % 3 == 2)
	{
		temp[1] = nb[0][0];
		temp[2] = nb[0][1];
		flag[0] = (flag[3] - 2);
		ft_solver_three(data, temp, flag, *ptr);
		*nb += 2;
		flag[2] = flag[2] + 2;
	}
	free(temp);
}

//prepara para traducir los grupos de numeros completos ???
void	ft_solver_loop(char *data, char **nb, int *flag, char ***ptr)
{
	while (flag[2] < flag[3])
	{
		while (**ptr != NULL)
			*ptr = *ptr + 1;
		flag[0] = (flag[3] - (flag[2] + 3));
		ft_solver_three(data, *nb, flag, *ptr);
		*nb = *nb + 3;
		flag[2] = flag[2] + 3;
	}
}

//traduce los numeros a palabras
char	**ft_solver(char *data, char *nb)
{
	int		*flag;
	char	**res;
	char	**ptr;

	flag = (int *)malloc(4 * sizeof(int));
	flag[0] = 0;
	flag[1] = 0;
	flag[2] = 0;
    //ir a ft_strlen
	flag[3] = ft_strlen(nb);
	if (flag[3] > 3)
		flag[1] = 1;
    //guardas resultado
	res = (char **)malloc((flag[3] * 2) * sizeof(char *));
	ptr = res;
	ft_solver_second(data, &nb, flag, &ptr);
	ft_solver_loop(data, &nb, flag, &ptr);
	free(flag);
	return (res);
}
