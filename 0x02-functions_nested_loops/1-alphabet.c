#include "main.h"

/**
 * main - entry point
 * Description: print lower case alphabet
 * Return: 0 if successful
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 26; i++)
	{
		putchar(alpha[i]);
	}
