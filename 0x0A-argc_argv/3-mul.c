#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiply two numbers
 * @argc: number of command line arguements
 * @argv: array containing program command line
 * Return: Always 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	sum = 0;
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	sum = i * j;
	printf("%d\n", sum);
	return (0);
}
