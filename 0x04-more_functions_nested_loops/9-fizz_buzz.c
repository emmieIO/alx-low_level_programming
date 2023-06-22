#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: Implements the FizzBuzz algorithm,
 * which prints numbers from 1 to 100.
 * For multiples of 3, it prints "Fizz".
 * For multiples of 5, it prints "Buzz".
 * For numbers that are multiples of both 3 and 5, it prints "FizzBuzz".
 * Prints the number itself for all other cases.
 *
 * Return: Always 0 (indicating success)
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("fizzBuzz ");
}
else
{
if (i % 3 == 0)
{
printf("fizz ");
}
else
{
if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}

}


}
}
putchar('\n');
return (0);
}
