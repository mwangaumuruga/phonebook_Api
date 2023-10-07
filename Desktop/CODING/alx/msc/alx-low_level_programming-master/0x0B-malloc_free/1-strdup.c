#include "main.h"
/**
 * _strdup - function pointing to new copied memory allocation
 * @str: string to be copied
 * Return: pointer to new memory location, Null otherwise
 **/
char *_strdup(char *str)
{
	char *cpy;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	cpy = malloc(sizeof(char) * (++len));
	if (cpy == NULL)
		return (NULL);
	for (i = 0; i < len - 1; i++)
		cpy[i] = str[i];
	return (cpy);
}
