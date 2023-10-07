#include "main.h"
/**
 * argstostr - Concatenate all arguements
 * @ac: Number of arguements
 * @av: Pointer to string arguements
 * Return: Pointer to new string
 **/
char *argstostr(int ac, char **av)
{
	char *cont;
	int i;
	int j;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j++])
			len++;
	}
	len++;
	cont = malloc(sizeof(**av) * (len + ac));
	if (cont == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			cont[len++] = av[i][j++];
		cont[len++] = '\n';
	}
	cont[len] = '\0';
	return (cont);
}
