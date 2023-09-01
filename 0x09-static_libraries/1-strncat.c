#include "main.h"

/**
 * _strcat - concatenates two strings together with n bytes
 * @dest: destination
 * @src: string to add to destination
 * @n: number of bytes to concatenate
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, p;

	m = 0;
	p = 0;

	while (dest[m] != '\0')
		m++;

	while (src[p] != '\0' && p < n)
	{
		dest[m] = src[p];
		m++;
		p++;
	}

	dest[m] = '\0';

	return (dest);
}
