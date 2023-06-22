/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to be checked
 *
 * Description:
 * This function checks whether a given character is an uppercase letter.
 *
 * Return:
 * Returns 1 if the character is uppercase, otherwise returns 0.
 */

int _isupper(int c)
{
char lc;
char uc;

for (lc = 'a'; lc <= 'z'; lc++)
{
if (lc == c)
{
return (0);
}
else
{
for (uc = 'A'; uc <= 'Z'; uc++)
{
if (uc == c)
{
return (1);
}
}
}
}

return (0);
}
