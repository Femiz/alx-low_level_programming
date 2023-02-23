#include "main.h"

/**
 * _islower - print check for lower case
 * @parameterx: _islower take c is the value
 * 
 * Return: 1  if successful
 */

int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
