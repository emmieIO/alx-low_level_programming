#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase,
 *              followed by uppercase, using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char lowercase = 'a';
    char uppercase = 'A';

    /* Print lowercase alphabet */
    while (lowercase <= 'z')
    {
        putchar(lowercase);
        lowercase++;
    }

    /* Print uppercase alphabet */
    while (uppercase <= 'Z')
    {
        putchar(uppercase);
        uppercase++;
    }

    putchar('\n');  /* Print new line */

    return (0);
}
