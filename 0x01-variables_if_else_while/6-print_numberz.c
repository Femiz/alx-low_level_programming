#include <stdio.h>

/**
 * main - print in lower case
 * Return: 0 if successful
 */

int main(void)
{
	int n = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(n[i]);
	}
	putchar('\n');
	return (0);
}
