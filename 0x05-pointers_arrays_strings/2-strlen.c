#include "main.h"

/**
* _strlen - function
* Description: calculate the length of a string
*
* @a: insert address that her value to be swaped
* 
*/

int _strlen(char *s)
{
	int p=0;

while (*s != '\0')
{
	s++;
	p=p+1;
}
return (p);
}
