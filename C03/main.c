#include <stdio.h>
#include <string.h>

ex00

int main (void)
{
	printf("%d", strcmp("adios", "hola"));
	printf("\n");
	printf("%d", ft_strcmp("adios", "hola"));
}

ex01

int	main(void)
{
	printf("%d", strncmp("aola", "holo", 0));
	printf("\n");
	printf("%d", ft_strncmp("aola", "holo", 0));
}

ex02

int	main(void)
{
	char dest[50] = "hola";
	char src[50] = "adios";
	printf("%s", strcat(dest, src));
	printf("\n");
	printf("%s", ft_strcat(dest, src));
}

ex03

int	main(void)
{
	char dest[50] = "hola";
	char src[50] = "adios";
	printf("%s", strncat(dest, src, 3));
	printf("\n");
	printf("%s", ft_strncat(dest, src, 3));
}

ex04

int	main(void)
{
	char find[50] = "com";
	char src[50] = "hola como estas, adios";
	//printf("%s", strncat(find, src));
	//printf("\n");
	printf("%s", ft_strstr(src, find));
}

ex05

int	main(void)
{
	char dest[50] = "holasa";
	char src[50] = "adios";
	printf("%lu", strlcat(dest, src, 5));
	printf("\n");
	printf("%u", ft_strlcat(dest, src, 5));
}
