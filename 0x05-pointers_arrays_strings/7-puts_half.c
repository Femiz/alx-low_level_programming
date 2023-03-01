#include "main.h"

/**
 * puts_half -  print every other character of a string
 * @str: input value
 * Return: void
 */

void puts_half(char *str)
{
	int k, c, len;

	len = 0;

	for (k = 0; str[k] != '\0'; k++)
		len++;

	c = (len / 2);

	if ((len % 2) == 1)
		c = ((len + 1) / 2);
	for (k = c; str[k] != '\0'; k++)
		_putchar(str[k]);
	_putchar('\n');
}

