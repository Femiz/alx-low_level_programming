#include "main.h"

/**
 * print_numbers - print number
 * Description: print digit number
 * Return: void
 */

void print_numbers(void)
{
	int number;

	while (number < 10)
	{
		_putchar(number++ + '0');
	}
	_putchar('\n');
}
