#include "main.h"
/**
 * _strlen - Function to be executed
 * @s: Function params
 *
 */

int _strlen(char* s) {
int length = 0;

while (*s) {
length++;
s++;
}

return (length);
}
