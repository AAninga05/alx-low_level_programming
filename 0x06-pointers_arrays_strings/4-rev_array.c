#include "main.h"
/**
 * reverse_array - program that reverses an array
 * @a: an array
 * @n: number of item in array
 *
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
	for (i = 0; i < n; i++)
	{
		a[i];
	}
}
