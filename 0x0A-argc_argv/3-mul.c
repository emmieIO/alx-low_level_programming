#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to multiply 2 numbers
 *
 * @argc: first argument
 * @argv: second argument
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int num1, num2, result;

	if(argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d", result);
	return (0);
}
