​// Funciones main para los ejercicios del proyecto C Piscine C 02

// Ejercicio 00

// int	main(void)
// {
// 	char	src[5] = "holis";
// 	char	dest[20];
// 	int	cont;

// 	cont = 0;
// 	ft_strcpy(dest, src);
// 	while (dest[cont])
// 	{
// 		printf("%c", dest[cont]);
// 		cont++;
// 	}
// }

// ---------------------------------------------------------

//Ejercicio 01

// int	main(void)
// {
// 	char	src[7] = "holiwis";
// 	char	dest[20];
// 	int	cont;

// 	ft_strncpy(dest, src, 4);
// 	while (dest[cont])
// 	{
// 		printf("%c", dest[cont]);
// 		cont++;
// 	}
// }

// ---------------------------------------------------------

// Ejercicio 02

// int main(void)
// {
// 	char str[20] = "asdfj h";

// 	printf("%d ", ft_str_is_alpha(str));
// }

// ---------------------------------------------------------

// Ejercicio 03

// int main(void)
// {
// 	char str[20] = "1h34";

// 	printf("%d ", ft_str_is_numeric(str));
// }

// ---------------------------------------------------------

// Ejercicio 04

// int main(void)
// {
// 	char str[20] = "asdfj h";

// 	printf("%d ", ft_str_is_lowercase(str));
// }

// ---------------------------------------------------------

// Ejercicio 05

// int main(void)
// {
// 	char str[20] = "ASDHKBAS";

// 	printf("%d ", ft_str_is_uppercase(str));
// }

// ---------------------------------------------------------

// Ejercicio 06

// int main(void)
// {
// 	char str[20] = "ASDHKBAS";

// 	printf("%d ", ft_str_is_printable(str));
// }

// ---------------------------------------------------------

// Ejercicio 07

// int main(void)
// {
// 	char	str[20] = "Hsdo fl-asFD";
// 	int	cont = 0;

// 	ft_strupcase(str);
// 	while (str[cont])
// 	{
// 		printf("%c", str[cont]);
// 		cont++;
// 	}
// }

// ---------------------------------------------------------

// Ejercicio 08

// int main(void)
// {
// 	char	str[20] = "Hsdo fl-asFD";
// 	int	cont = 0;

// 	ft_strlowcase(str);
// 	while (str[cont])
// 	{
// 		printf("%c", str[cont]);
// 		cont++;
// 	}
// }

// ---------------------------------------------------------

// Ejercicio 09

// int main(void)
// {
// 	char	str[80] = "salut, cOmment 4fd vas-h ?";
// 	int	cont = 0;

// 	ft_strcapitalize(str);
// 	while (str[cont])
// 	{
// 		printf("%c", str[cont]);
// 		cont++;
// 	}
// }

// ---------------------------------------------------------

// Ejercicio 10

// int main(void)
// {
// 	char src[40] = "hola me llamo pablo";
// 	char dest[9];
// 	int length;
// 	int cont = 0;

// 	printf("original - ");
// 	printf("%lu", strlcpy(dest, src, 4));
// 	printf("\n");
// 	printf("mio - ");
// 	length = ft_strlcpy(dest, src, 4);
// 	printf("%d ", length);
// 	printf("\n");
// 	while (dest[cont])
// 	{
// 		printf("%c", dest[cont]);
// 		cont++;
// 	}
// }

// ---------------------------------------------------------

// Ejercicio 11

// int main(void)
// {
// 	char	str[40] = "Coucou	tu vas bien ?";

// 	ft_putstr_non_printable(str);
// }

// ---------------------------------------------------------

// Ejercicio 12
// //El segundo argumento al llamar a la función es la longitud de lo que se quiera imprimir

// int main(void)
// {
// 	char str[40] = "hola	me llamo Pablo buenos dias";

// 	ft_print_memory(str, 31);
// 	ft_print_memory(str, 0);
// }
