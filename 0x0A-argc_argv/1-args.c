#include <stdio.h>
/**
 * main - entry point of the program
 * @argc: keep count of the command line
 * @argv: you have your own function
 * Return: always returns (0)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

