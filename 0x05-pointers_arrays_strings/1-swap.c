#include "main.h"

/**
 * swap_int - swaps function
 * @a: first input
 * @b: second input
 * Return: swap the input
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
