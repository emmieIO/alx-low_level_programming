#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: The program generates a random number
 * and prints its last digit along with an appropriate message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    int lastdigit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    lastdigit = n % 10;

    if (lastdigit == 0)
    {
        printf("Last digit of %d is %d and is 0", n, lastdigit);
    }
    else if (lastdigit > 5)
    {
        printf("Last digit of %d is %d and is greater than 5", n, lastdigit);
    }
    else if (lastdigit < 6)
    {
        printf("Last digit of %d is %d and is less than 6 not 0", n, lastdigit);
    }
    return (0);
}
