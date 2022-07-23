#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints minimum number of coins
 * to make change for an amount of money
 * @argc: number of command line arguements
 * @argv: array containing program command line
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int j, num, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			num -= coins[j];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
