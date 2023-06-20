#include "main.h"
#include <unistd.h>

/**
 * times_table - Generates a times time table from 0 to 9.
 *
 * Description:
 *     This function generates a times table from 0 to 9
 *     and uses the write() function to print the table.
 */
void times_table(void)
{
int table[10][10];
int i, j;
char buffer[5]; /* Buffer to store the formatted number */

/* Generate the times table */
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
table[i][j] = i * j;
}
}

/* Print the times table */
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
/* Format the number and store it in the buffer */
snprintf(buffer, sizeof(buffer), "%d ", table[i][j]);

/* Write the formatted number to the standard output */
write(STDOUT_FILENO, buffer, sizeof(buffer) - 1);
}

/* Write a newline character to the standard output */
write(STDOUT_FILENO, "\n", 1);
}
}

