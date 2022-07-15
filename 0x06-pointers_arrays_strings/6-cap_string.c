#include "main.h"
/**
 * cap_string - function that capitalize all words on a string
 * @str: A string parameter
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int count = 0, i;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(str + count) >= 'a' && *(str + count) <= 'z')
	{
		*(str + count) = *(str + count) - 32;
		count++;
	}
	/*count++*/
	while (*(str + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(str + count) == separators[i])
			{
				if ((*(str + (count + 1))) >= 97 && ((*(str + (count + 1))) <= 122))
				{
					*(str + (count + 1)) = *(str + (count + 1)) - 32;
						break;
				}
			}
		}
	count++;
	}
	return (str);
}
