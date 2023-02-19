#include <stdio.h>

/**
 * main - print in lower case
 * Return: 0 if successful
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%d", i);
	}
	putchar('\n');
	return (0);
}
