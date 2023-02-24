#include "main.h"

/**
 * print_numbers - print number
 * Description: print digit number
 * Return: value
 */

void print_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
	return (0);
}
