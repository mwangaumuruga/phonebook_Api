#include <stdio.h>
/**
* main -  prints all arguements
* @argc: arguement count
* @argv: array of pointers to CLI arguement
* Return: 0
**/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
