#include "main.h"

/**
 * _isalpha - print check for alphabetic character
 * @c:the number enter when calling the function
 * Description: _isalpha print the alphabet in lowercase or uppercase
 * Return: 1  if successful
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
