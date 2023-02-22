#include <stdio.h>

/**
 * main - combination of two digits number
 *
 * Return: 0 if successful 
 */

int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if (num < 10)
		{
			putchar('0' + num);
		}
		else 
		{
			putchar(num);
		}
	}
	return (0);
}
