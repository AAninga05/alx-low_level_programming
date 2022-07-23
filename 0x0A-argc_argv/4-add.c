#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints adds two numbers
 * @argc: number of command line arguements
 * @argv: array containing program command line
 * Return: Always 0 (Success) or 1(Error)
 */
int main(int argc, char *argv[])
{
	int i, j, k, sum, result;

	result = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		sum = atoi(argv[k]);
		result += sum;
	}
	printf("%d\n", result);
	return (0);
}
