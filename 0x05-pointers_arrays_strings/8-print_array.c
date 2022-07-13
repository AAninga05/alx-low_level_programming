#include "main.h"
/**
 * print_array - program that prints n element of array
 * @a: Integer a
 * @n: Integer n
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}

