#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
char password[84];
int i, sum, random;

srand(time(0));

sum = 0;
i = 0;
while (sum < 2772 - 122)
{
random = rand() % 62;
if (random < 10)
password[i] = '0' + random;
else if (random < 36)
password[i] = 'a' + random - 10;
else
password[i] = 'A' + random - 36;

sum += password[i];
i++;
}

password[i] = 2772 - sum;
password[i + 1] = '\0';

printf("%s", password);

return 0;
}
