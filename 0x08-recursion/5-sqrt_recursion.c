#include "main.h"

int power_operation(int n, int guess);

/**
 * power_operation - Recursive function to find the
 * 			natural square root of a number.
 * @n: Input number.
 * @guess: Current guess for the square root.
 * Return: Square root or -1 if not found.
 */
int power_operation(int n, int guess)
{
	int nextGuess;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	nextGuess = (guess + n / guess) / 2;

	if (nextGuess == guess)
	{
		return (guess);
	}
	else
	{
		return (power_operation(n, nextGuess));
	}
}
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: Input number.
 * Return: Natural square root or -1 if not found.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (power_operation(n, n));
}
