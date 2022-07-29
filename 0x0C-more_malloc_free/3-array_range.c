#include "main.h"
/**
 * array_range - function that creates array of integer
 * @min: minimum number
 * @max: maximum number
 *
 * Return: an array of integers
 */
int *array_range(int min, int max)
{
	int *array;
	int len, i;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	array = malloc(len * sizeof(*array));
	if (array != NULL)
	{
		for (i = 0; i < len; i++, min++)
		{
			*(array + i) = min;
		}
	}
	else
	{
			return (NULL);
	}
	return (array);
}
