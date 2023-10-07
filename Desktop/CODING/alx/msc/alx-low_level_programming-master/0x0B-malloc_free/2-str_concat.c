#include "main.h"
/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: new memory location or null otherwise
 **/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1 = 0;
	int len2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	len2++;
	str = malloc(sizeof(char) * (len1 + len2));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	return (str);
}
