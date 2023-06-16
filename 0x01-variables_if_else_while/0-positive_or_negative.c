#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: The program prints a message
 * based on the output of the random number 
 * retrieved from n.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n == 0)
	{
		printf("is zero");
	}else if(n > 0)
	{
		printf("is positive");
	}else if()
	{
		printf("is negative")
	}
	return (0);
}
