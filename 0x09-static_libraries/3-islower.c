#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: the character
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
