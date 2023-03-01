#include "main.h"

/**
 * print_array -  print every other character of a string
 * @a: first input value
 * @b: second input value
 * Return: void
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < (n - 1); k++)
		printf("%d, ", a[k];

	if (k == (n - 1))
		printf("%d", a[n - 1]);

	_putchar('\n');
}

