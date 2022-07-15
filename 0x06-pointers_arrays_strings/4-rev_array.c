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
	int *start_int, *end_int, c;
	int i;

	start_int= a;
	end_int = a;

	for (i = 0; i < n - 1; i++)
	{
		end_int++;
	}
	for (i = 0; i < n / 2; i++)
	{
		c = *end_int;
		*end_int = *start_int;
		*start_int = c;

		start_int++;
		end_int--;
	}	
	
	
	/*
	 * works but fails all checker
	 * int i, temp;

	for (i = 0; i < n / 2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
	for (i = 0; i < n; i++)
	{
		a[i];
	}*/
}
