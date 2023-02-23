#include "main.h"

/**
 * print_alphabet_x10 - print lowercase x10
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
		count++;
		_putchar('\n');
	}
}
