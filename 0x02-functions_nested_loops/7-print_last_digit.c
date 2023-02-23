#include "main.h"

/**
 * print_last_digit - print sign of a number
 * @r:the number enter when calling the function
 * Description: print sign of number
 * Return: 1  if successful
 */

int print_last_digit(int r)
{
	int lastDigit = r % 10;

	lastDigit = lastDigit < 0 ? -1 * lastDigit : lastDigit;
	_putchar(lastDigit + '0');
	return (lastDigit < 0 ? -1 * lastDigit : lastDigit);
}
