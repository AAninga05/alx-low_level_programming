#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints sum of diagonal
 * prints sum of diagonals
 * @a: array to e printed
 * @size: size of a
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += *(a + i * size + i);
		printf("%d, ", sum);
	}	
	sum = 0;
		for (j = 0; j < size; j++)
		{
		sum += *(a + size * (j + 1) - (j + 1));
		printf("%d\n", sum);
		}
}
