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
char *ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
	return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
	return (NULL);
}
for (i = 0 ; i < nmemb ; i++)
{
	ptr[i] = 0;
}
return (ptr);
}
