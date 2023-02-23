#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print addition of number 
 * @n: first value 
 * Description: print sign of number
 * Return: sum of @a and @b
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");;
			n--;
		}
	}
	else 
	{
		while (n <= 98)
		{
			printf("%d", n)
				if (n != 98)
					printf(", ")
						n++
		}

	}
	putchar ('\n');
}
}

