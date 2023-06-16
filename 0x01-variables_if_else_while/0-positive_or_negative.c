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
	/* The if conditional is used to check for negativity*/
	if(n == 0)
	{
		printf("%d is zero\n",n);
	}else if(n > 0)
	{
		printf("%d is positive\n",n);
	}else if(n < 0)
	{
		printf("%d is negative\n",n)
	}
	return (0);
}
