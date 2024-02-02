/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpina-gu <mpina-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:17:33 by dahurtad          #+#    #+#             */
/*   Updated: 2022/08/30 14:03:18 by mpina-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	**ft_solver(char *data, char *nb);
char	*ft_read(char *path);
void	ft_printer(char **res);
char	*ft_take_zeros_out(char *str);
int		ft_check(char *path, char *nb);

//selecciona el diccionario que va a utilizar dependiendo del numero de argumentos
int	ft_rush02(int argc, char *argv[])
{
	char	*path;
	char	*nb;

	path = "numbers.dict";
	nb = "";
	if (argc == 2)
        //ir a ft_validate
		nb = ft_take_zeros_out(argv[1]);
	else if (argc == 3)
	{
        //ir a ft_validate
		nb = ft_take_zeros_out(argv[2]);
		path = argv[1];
	}
	return (ft_check(path, nb));
}

//comprueba si los dicionarios son validos, transforma e imprime resultado
int	ft_check(char *path, char *nb)
{
	char	**res;
	char	*data;

	if (nb[0] == '!')
		return (-1);
    //ir a ft_get_size
	data = ft_read(path);
	if (data == NULL)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
    //ir a ft_solver
	res = ft_solver(data, nb);
	if (res != NULL)
        //ir a ft_printer;
		ft_printer(res);
	free(res);
	free(data);
	return (0);
}

//comprueba que hay 2 o 3 argumentos
int	main(int argc, char *argv[])
{
	if (argc == 2 || argc == 3)
	{
		if (ft_rush02(argc, argv) < 0)
			write(1, "Error\n", 6);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
