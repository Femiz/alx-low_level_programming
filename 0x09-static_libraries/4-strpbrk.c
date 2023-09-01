#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: search string
 * @accept: bytes to look for
 *
 * Return: NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int m, n;

	m = 0;

	while (*s != '\0')
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (*s == accept[n])
			{
				return (s);
			}
		}
		m++;
		s++;
	}

	return (NULL);
}
