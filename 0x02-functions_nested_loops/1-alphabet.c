#include "main.h"

/**
 * print_alphabet -print lower case
 * Description: print lower case alphabet
 * Return: nothing if successful
 */

void print_alphabet(void)
{
	int start = 97, end = 122;

	while (start <= end)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
