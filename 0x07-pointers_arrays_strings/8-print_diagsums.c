#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints sum of diagonal
 * prints sum of diagonals
 * @a: array to be printed
 * @size: size of a
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i);
		a += size;
	}
	a -= size;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum2 += *(a + i);
		a -= size;
	}
	printf("%d, %d", sum1, sum2);
	printf("\n");
}
