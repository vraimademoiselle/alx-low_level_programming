#include <stdlib.h>
#include "function_pointers.h"

/** print_name is a function pointer that prints name
 * @name: name that should be printed
 * @f - pointer to name
 */

void print_name(char *name, void (*f)(char *))

 {
    if (name == NULL || f == NULL);
    return;

    f(name);
     
 }
