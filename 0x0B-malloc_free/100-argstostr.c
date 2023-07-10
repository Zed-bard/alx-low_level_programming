#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: Number of arguments.
 * @av: Array of pointers to the arguments.
 *
 * Return: Pointer to the concatenated string, or NULL if ac == 0, av == NULL,
 *         or memory allocation fails.
 *
 * This function takes the number of arguments and an array of pointers to the
 * arguments, concatenates all the arguments into a single string separated by
 * newlines, and returns a pointer to the concatenated string. If the number of
 * arguments is 0, the array of pointers is NULL, or memory allocation fails,
 * the function returns NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[r] = av[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}

