#include "main.h"

/**
 * _strcat - concatenates two strings together
 * @dest: destination
 * @src: string to add to destination
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int m, n;

	m = 0;
	n = 0;

	while (dest[m] != '\0')
		m++;

	while (src[n] != '\0')
	{
		dest[m] = src[n];
		m++;
		n++;
	}

	dest[m] = '\0';

	return (dest);
}
