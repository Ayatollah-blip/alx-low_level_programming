#include "function_pointers.h"
/**
* print_name - function that calls a function pointer to print
*
* @name: parameter that get the name to be printed
*
* @f: parameter function to be called
*/

void print_name(char *name, void (*f)(char *))
{
if(!name)
{
f(name);
}
}
