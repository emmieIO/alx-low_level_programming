#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory block to be reallocated
 * @old_size: Size of the old memory block, in bytes
 * @new_size: Size of the new memory block, in bytes
 *
 * Return: Pointer to the reallocated memory block
 *         NULL if reallocation fails 
 * or new_size is 0 and ptr is not NULL
 *
 * Description: If new_size is 
 * equal to old_size, the function does nothing.
 * If ptr is NULL, it behaves like malloc(new_size).
 * If new_size is 0 and ptr is not NULL, 
 * it frees the memory block and returns NULL.
 * The contents will be copied to the 
 * newly allocated space, up to the minimum
 * of the old and new sizes.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

if (new_size == 0)
{
free(ptr);
return NULL;
}

if (ptr == NULL)
{
return malloc(new_size);
}

if (new_size == old_size)
{
return ptr;
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return NULL;
}

if (new_size < old_size)
{
memcpy(new_ptr, ptr, new_size);
}
else
{
memcpy(new_ptr, ptr, old_size);
}

free(ptr);

return new_ptr;
}
