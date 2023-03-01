#include "main.h"

/**
 * rev_string - print a string in reverse
 * @s: input value
 * Return: void
 */

void rev_string(char *s)
{
	char val = s[0];
	int c = 0;
	int m;

	while (s[c] != '\0')
		c++;
	for (m = 0; m < c; m++)
	{
		c--;
		val = s[m];
		s[m] = s[c];
		s[c] = val;
	}
}

