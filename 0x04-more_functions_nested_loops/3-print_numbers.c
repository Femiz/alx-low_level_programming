#include "main.h"

/**
 * print_numbers - print number
 * Description: print digit number
 * Return: value
 */

void print_numbers(void)
{
	char c;
	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
