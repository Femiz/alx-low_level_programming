#include "main.h"

/**
 * main - multiplication of two numbers.
 * @argc: argument to count
 * @argv: array arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num_value1, num_value2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num_value1 = atoi(argv[1]);
	num_value2 = atoi(argv[2]);
	prod = num_value1 * num_value2;

	printf("%d\n", mul);

	return (0);
}
