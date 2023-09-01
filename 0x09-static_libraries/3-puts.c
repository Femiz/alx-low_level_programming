#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 */
void _puts(char *s)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
