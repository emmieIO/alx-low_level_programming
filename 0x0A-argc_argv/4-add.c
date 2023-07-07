#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Program entry point
 *
 * @argc: comand count
 * @argv: command array
 *
 * Return: returns success
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		 num = atoi(argv[i]);

		sum += num;
	}


	printf("%d\n", sum);

	return (0);
}
