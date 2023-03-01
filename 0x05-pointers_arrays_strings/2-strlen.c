#include "main.h"
#include <string.h>

/**
 * _strlen - returns the lenght of a string
 * @s: input value
 * Return: s value
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
