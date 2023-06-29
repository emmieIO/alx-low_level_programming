#include <stdio.h>

/**
* main - Entry point of the program.
* and prints the updated value of a[2].
* Betty is here to ensure
* a smooth execution and adherence to coding standards.
* So sit back, relax, and let Betty guide you through this program!
*
* Return: Always 0 (indicating successful execution)
*/
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;

*(a + 2) = 98;


printf("a[2] = %d\n", a[2]);
return (0);
}
