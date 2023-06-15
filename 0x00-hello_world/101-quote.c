#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Description: This function uses the "write()" function to print out
 * the specified string with a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char part1[] = "and that piece of art is useful\" - Dora Korpar, ";
char part2[] = "2015-10-19\n";
char message[100];
strcpy(message, part1);
strcat(message, part2);
write(STDERR_FILENO, message, strlen(message));
return (1);
}
