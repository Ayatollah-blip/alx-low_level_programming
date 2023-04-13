#include "main.h"
/**
* malloc_checked - Function
*
* @b: parameter
*
* Return: pointer if success
*/
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
	exit(98);
}
return (ptr);
}
