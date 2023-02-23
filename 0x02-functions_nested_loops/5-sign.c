#include "main.h"

/**
 * print_sign - print sign of a number
 * @n:the number enter when calling the function
 * Description: print sign of number
 * Return: 1  if successful
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
			}
	else
	{
		_putchar('0');
		return (0);

