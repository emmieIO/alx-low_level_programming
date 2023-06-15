#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This function uses the printf function to prints out
 * the sizes of the  specified data type with a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of a short: %lu byte(s)\n", sizeof(short));
printf("Size of a int: %lu byte(s)\n", sizeof(int));
printf("Size of a lon int: %lu byte(s)\n", sizeof(long));
printf("Size of a long long: %lu byte(s)\n", sizeof(long long));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
