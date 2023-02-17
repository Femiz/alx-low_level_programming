#include <stdio.h>

/**
 * main - print in lower case
 * Return: 0 if successful
 */

int main(void)
{
	char n[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(n[i]);
	}
	putchar('\n');
	return (0);
}
