#include "main.h"
/**
 * rev_string - Program thaat reverses a string
 * @s: String character
 *
 * Return: No Return
 */
void rev_string(char *s)
{
	int count = 0, i, j;
	char *str, temp;

	while (s[count] != '\0')
	{
		count++;
	}
	str = s;
	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
