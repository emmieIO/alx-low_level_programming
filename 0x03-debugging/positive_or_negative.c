#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - Entry point of the program
 *
 * Description: The program prints a message
 * based on the output of the random number
 * retrieved from n.
 *
 * Return: Always 0 (Success)
 */
int positive_or_negative(int i)
{


srand(time(0));
i = rand() - RAND_MAX / 2;

if (i == 0)
{
printf("%d is zero\n", i);
}
else if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}

return (0);
}
