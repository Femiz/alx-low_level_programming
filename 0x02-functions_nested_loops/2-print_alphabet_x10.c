#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void);
int main(void)
{
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	int start = 97, end = 122;

	while (start <= end)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
