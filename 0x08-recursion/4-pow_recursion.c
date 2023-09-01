#include "main.h"

/**
 * _pow_recursion - function that returns the value of x to power of y.
 * @x: value
 * @y: power
 * Return: value of the exponentiation.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}