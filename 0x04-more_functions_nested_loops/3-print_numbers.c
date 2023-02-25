#include "main.h"

/**
* print_numbers - print number from 0 up to 9
* Return: void
*/

void print_numbers(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
