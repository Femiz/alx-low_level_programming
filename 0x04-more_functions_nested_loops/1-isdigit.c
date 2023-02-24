#include "main.h"

/**
 *  int _isdigit- checks for digit
 * @c: value to use
 * Description: print digit number
 * Return: 1 if successful and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
