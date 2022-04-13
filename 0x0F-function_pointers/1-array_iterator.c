#include <stdio.h>
#include "function_pointer.h"

/**
 *@array: actual array
 *@size: size of the array
 *@action: is a pointer to the funtion 
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
    if (array == NULL || action == NULL)
    return;

    while (size > 0)
    {
        action(*array);
        array++;
    }
}
