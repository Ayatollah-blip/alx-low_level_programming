#include "main.h"
/**
* _calloc - Function
* Description: function calloc base on malloc
*
* @nmemb: parameter for number to be alocated
* @size: parameter for the size
*
* Return: pointer if success
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
	return (NULL);
ptr = malloc(nmemb * sizeof(size));
if (ptr == NULL)
{
	return (NULL);
}
return (ptr);
}
