#include "main.h"

/**
 * *_memcpy - function to copy memory area
 * @dest: destination area
 * @src: source area
 * @n: bytes to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	k = 0;

	while (k < n)
	{
		dest[k] = src[k];
		k++;
	}
	return (dest);
}
