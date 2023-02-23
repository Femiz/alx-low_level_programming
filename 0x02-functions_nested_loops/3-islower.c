#include "main.h"

/**
 * _islower - print check for lower case
 * @c:the number enter when calling the function
 * Description: print islower if it is lowercase
 * Return: 1  if successful
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
