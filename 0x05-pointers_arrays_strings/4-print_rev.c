#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: input value
 * Return: void
 */

void print_rev(char *s)
{
	int var = 0;
	int m;

	while (*s != '\0')
	{
		var++;
		s++;
	}
	s--;

	for (m = var;; m > 0, m--)
	{
		_putcahr(*s);
		s--;
	}
		_putchar('\n');
}

