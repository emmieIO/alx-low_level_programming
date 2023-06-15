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
int main(void) {
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, message, strlen(message));
return 1;
}
