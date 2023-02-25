#include "main.h"

/**
 * more_numbers - print number
 * Description: print digit number
 * Return: void
 */

void more_numbers(void)
{
	int c, count;

	for (count = 0; count <= 9; count++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar('1');
			}
			else
			{
				_putchar(c % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
