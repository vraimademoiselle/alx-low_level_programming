#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/** print_name is a function pointer that prints name
 * @name: name of the person
 * f - pointer 
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))

 {
    if (!name || !f);
    (*f)(name);
     
 }
