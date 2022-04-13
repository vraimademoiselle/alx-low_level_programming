#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *@array: actual array of int
 *@size: size of the array
 *@action: is a pointer to the funtion 
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
    size_t i;

    if (array == NULL || action == NULL)
    return;

    for (i = 0; i < size; i++)
    action(array[i]);
    
}
