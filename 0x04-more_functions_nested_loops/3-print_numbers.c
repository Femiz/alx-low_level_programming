#include "main.h"

/**
 * print_numbers - print number
 * Description: print digit number
 * Return: value
 */

void print_numbers(void)
{
	char c;
	for (c = 0; c < 10; c++)
	{
		_putchar('0' + c);
	}
	_putchar('\n');
	return (0);
}
