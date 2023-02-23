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
		return (1);
		putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		putchar('-');
	}
	else
	{
		return (0);
		putchar('0');
}
