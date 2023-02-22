#include "main.h"

/**
 * main - entry point
 * Description: print lower case alphabet
 * Return: 0 if successful
 */

void print_alphabet(void)
{
	int start = 97, end = 122;

	for (start = 97; start <= end; start++)
	{
		_putchar(start);
	}
	return (0);
}
