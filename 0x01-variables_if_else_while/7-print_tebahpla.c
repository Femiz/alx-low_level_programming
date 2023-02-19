#include <stdio.h>

/**
 * main - print in lower case
 * Return: 0 if successful
 */

int main(void)
{
	char n[24] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(n[i]);
	}
	putchar('\n');
	return (0);
}
