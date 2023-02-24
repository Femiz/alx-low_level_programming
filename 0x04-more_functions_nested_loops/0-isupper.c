#include "main.h"

/**
 * _isupper - checks for uppercase letter
 * @c: value to use
 * Description: print capital letter
 * Return: 1 if successful and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
