#include "main.h"

/**
 * *_memset - function that fills memory with constant byte
 * @s: memory area
 * @b: value to copy
 * @n: number of times to copy the value
 *
 * Return: memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}

	return (s);
}
