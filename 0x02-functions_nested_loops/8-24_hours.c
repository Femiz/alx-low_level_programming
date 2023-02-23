#include "main.h"

/**
 * jack_bauer - print sign of a number
 * Description: print sign of number
 * Return: 1  if successful
 */

void jack_bauer(void)
{
	int s = 0, m = 23, s2 = 0, m2 = 59;
		while (s <= m)
		{
			while (s2 <= m2)
			{
				_putchar(s < 9 ? 0 + '0' : s / 10 + '0');
				_putchar(s < 9 ? 0 + '0' : s % 10 + '0');
				_putchar(':');
				_putchar(s2 < 9 ? 0 + '0' : s2 / 10 + '0');
				_putchar(s2 < 9 ? 0 + '0' : s2 % 10 + '0');
				_putchar('\n');

				s2++;
			}
			s = 0;
			s++;
		}
}
