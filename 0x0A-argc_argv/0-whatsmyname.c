#include <stdio.h>
/**
 * main - entry point of the program
 * @argc: keep count of the command line
 * @argv: you have your own function
 * Return: always returns (0)
 *
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

