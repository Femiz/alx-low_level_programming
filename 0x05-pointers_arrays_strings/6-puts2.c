#include "main.h"

/**
 * puts2- print every other character of a string
 * @str: input value
 * Return: void
 */

void puts2(char *str)
{
	int val = 0;
	int c = 0;
	char *k = str;
	int m;

	while (*k != '\0')
	{
		k++;
		val++;
	}

	c = val - 1;

	for (m = 0; m <= c; m++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[m]);
	}
	_putchar('\n');
}

