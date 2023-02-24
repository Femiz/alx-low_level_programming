#include "main.h"

/**
 * print_numbers - print number from 0 up to 9
 * Return: void
 */

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		_putchar(number + '0');
	}
	_putchar('\n');
}
