#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Program entry point
 *
 * @argc: comand count
 * @argc: command array
 *
 * Return: returns success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int count = 0;
	int result = 0;

	while (argv[count]) {
		int value = atoi(argv[count]);

		if (!isdigit(argv[count][0])) {
			printf("Error\n");
			return 1;
		} else {
			result += value;
		}

		count++;
	}

	printf("%d\n", result);
	return 0;
}
