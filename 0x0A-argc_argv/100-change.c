#include <stdio.h>
#include <stdlib.h>

/**
 *  minimumCoins - Calculates the minimum number of coins required
 *               to make change for a given amount in cents.
 * @cents: The amount in cents.
 *
 * Return: The minimum number of coins.
 */
int minimumCoins(int cents)
{
	int coins = 0;

	if (cents <= 0)
		return (0);

	while (cents >= 25)
	{
		coins++;
		cents -= 25;
	}

	while (cents >= 10)
	{
		coins++;
		cents -= 10;
	}

	while (cents >= 5)
	{
		coins++;
		cents -= 5;
	}

	while (cents >= 2)
	{
		coins++;
		cents -= 2;
	}

	coins += cents;

	return (coins);
}

/**
 * main - Entry point. Calculates the minimum number of coins required
 *        to make change for the given amount of cents.
 * @argc: The number of command-line arguments (including the program name).
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int cents, result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	result = minimumCoins(cents);

	printf("%d\n", result);

	return (0);
}

