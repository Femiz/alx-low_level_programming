#include "main.h"

/**
 * *_strcpy - copies the string to another destination
 * @dest: destination
 * @src: string to be copied
 *
 * Return: the pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, k;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (k = 0; k < length; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';

	return (dest);
}
