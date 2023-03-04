#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: first input
 * @src: second input
 * @n: third input
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[i] != '\0')
	{
		dest[j] = src[j];
		i++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
