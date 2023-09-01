#include "main.h"

/**
 * main - Prints the minimum number of coins to
 *		make change for an amount of money.
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: (0) if successful, (1) for errors
 */
int main(int argc, char *argv[])
{
	int cents, coin_count, coin_counts, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coin_count = sizeof(coins) / sizeof(coins[0]);
	coin_counts[coin_count];
	for (i = 0; i < coin_count; i++)
		coin_counts[i] = 0;

	for (i = 0; i < coin_count; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coin_counts[i]++;
		}
	}
	for (i = 0; i < coin_count; i++)
		printf("%d ", coin_counts[i]);

	printf("\n");

	return (0);
}
