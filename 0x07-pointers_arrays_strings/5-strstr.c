#include "main.h"
#include <stddef.h>
/**
 * _strstr - function to locate a substring
 * @haystack: pointer to source string
 * @needle: pointer to substring
 * Return: pointer to beginning of located substring
 * or NULL if substring not found
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	for (i = 0; *haystack; i++)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
	}
	return (NULL);
}
