#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory using malloc and exit if failed
 *@b: The number of bytes to be allocated
 *Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
void *mem = malloc(b);

if (mem == NULL)
exit(98);

return (mem);
}