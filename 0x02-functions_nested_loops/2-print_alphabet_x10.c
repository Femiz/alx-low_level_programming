#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int start = 97, end = 122, count = 1;

	while (count <= 10)
	{
		while (start <= end)
		{
			_putchar(start);
			start++;
		}
		start = 97;

		_putchar('\n');
	}
}
