#include "main.h"
/**
 * _isdigit - Check if value is digit
 * @c: input value
 *
 * Return: 1 if successful
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
