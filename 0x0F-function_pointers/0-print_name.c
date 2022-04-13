#include "function_pointers.h"

/** print_name is a function pointer that points  name
 * @name: name that should be printed
 * @f - pointer to name
 * Return: name.
 */

void print_name(char *name, void (*f)(char *))

 {
   printf("my name is = %s\n", name);
 *f(name)
return; 
     
 }
