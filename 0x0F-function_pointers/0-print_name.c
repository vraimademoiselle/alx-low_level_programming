#include "function_pointers.h"

/** 
 *print_name - is a function pointer that points  name
 *@name: name that should be printed
 *@f: pointer to name
 *Return: name.
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL);
return(0);
f(name);
}
