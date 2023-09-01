#include "main.h"

/**
 * _strncpy - function to copy a string
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int q;

	for (q = 0; src[q] != '\0' && q < n; q++)
	{
		dest[q] = src[q];
	}

	while (q < n)
	{
		dest[q] = '\0';
		q++;
	}

	return (dest);
}
