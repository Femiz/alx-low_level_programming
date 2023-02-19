#include <stdio.h>

/**
 * main - print in lower case
 * Return: 0 if successful
 */

int main(void)
{
	char n[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(n[i]);
	}
	putchar('\n');
	return (0);
}
