#include <stdio.h>

/**
 * main - print base16
 * Return: 0 if successful
 */

int main(void)
{
	int n = 0;

	char i = 'a';

	while (n < 10)
	{	
		putchar(n + '0');
		n++;
	}
	while (i < 'g')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
