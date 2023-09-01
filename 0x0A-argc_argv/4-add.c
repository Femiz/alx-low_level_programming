#include "main.h"

/**
 * is_digit - Checks if a character is a digit.
 * @c: The character to check
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - Adds positive numbers and prints the result
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 if successful, 1 if there's an error in the input
 */
int main(int argc, char *argv[])
{
	int sum, is_valid, num, i, j;
	char *numStr;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *numStr = argv[i];

		is_valid = 1;
		num = 0;

		for (j = 0; numStr[j] != '\0'; j++) {
			if (!is_digit(numStr[j]))
			{
				is_valid = 0;
				break;
			}

			num = num * 10 + (numStr[j] - '0');
		}

		if (!is_valid || num < 0) {
			continue;
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
