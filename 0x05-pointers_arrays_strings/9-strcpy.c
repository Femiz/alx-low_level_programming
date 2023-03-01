#include "main.h"

/**
 *  _strcpy - copies the string
 *  @dest: first var
 *  @src: second var
 *  Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int z  = 0;

	while (*(src + 1) != '\0')
		y++

	for (z = 0; z < 1; z++)
	{
		dest[z] = src[z];
	}
	dest[y] = '\0';
	return (dest);
}
