#include "main.h"

/**
* swap_int - function
* Description: reset value everytime to 98
*
* @a: insert address that her value to be swaped
* @b: insert adress that her value to be swaped
*/

void swap_int(int *a, int *b)
{
	int *p;
	int *q;

	p = a;
	q = b;

	*p = *b;
	*q = *a;
}
