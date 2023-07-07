#include <stdio.h>

/**
 * main - Program Entry Point
 * @argc: Keeps count
 * @argv: arrays of command
 *
 * Return: Always return success(0)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int count = 0;

	while (argv[count])
	{
		printf("%s\n", argv[count]);
		count++;
	}

	return (0);

}
