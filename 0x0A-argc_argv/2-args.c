#include "main.h"

/**
 * main - pprogram that rints all arguments it receives
 * @argc: arguments numbers
 * @argv: array in the arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv[])
{
	int w;

	w = 0;

	while (w < argc)
	{
		printf("%s\n", argv[w]);
		w++;
	}

	return (0);
}
