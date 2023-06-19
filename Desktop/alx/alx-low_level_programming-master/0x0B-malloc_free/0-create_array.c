#include <stdlib.h>
/**
 * *create_array - Create dynamic array and initialize with a character
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null
 **/
char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	A = malloc(sizeof(char) * size);
	if (A == NULL)
		return (NULL);
	while (i < size)
	{
		A[i] = c;
		i++;
	}
	return (A);
}
