#include "function_pointers.h"

<<<<<<< HEAD
/**
*print_name - is a function pointer that points  name
*@name: name that should be printed
*@f: pointer to name
*Return: name.
*/
=======
/** print_name is a function pointer that points  name
 * @name: name that should be printed
 * @f - pointer to name
 * Return: name.
 */
>>>>>>> 4ea3398974527f79a5fe3dc2a413e173ec4f5f73

void print_name(char *name, void (*f)(char *))
{
f(name);
}

<<<<<<< HEAD
=======
 {
   printf("my name is = %s\n", name);
 *f(name)
return; 
     
 }
>>>>>>> 4ea3398974527f79a5fe3dc2a413e173ec4f5f73
