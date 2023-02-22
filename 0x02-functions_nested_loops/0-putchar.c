#include <stdio.h>
#include <main.h>

/**
 * main - entry point 
 *
 * Return: 0 when successful 
 */

int main(void)
{
	char n[8] = "_putchar";
	for(int i = 0; i <= 8; i++)
	{
		putchar(n[i]);
	}
	return (0);
}
