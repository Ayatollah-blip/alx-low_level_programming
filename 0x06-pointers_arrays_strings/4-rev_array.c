#include "main.h"

/**
* reverse_array - function
* Description: print an array
*
* @a: insert address og the array
* @n: araay length
*/

void reverse_array(int *a, int n)
{
int i, constVar;
if (n > 0)
{
	for (i = 0 ; i < n ; i++)
	{
		constVar = *(a + n - i);
		*(a + n - i) = *(a + i);
		*(a + i) = constVar;
	}
}
}
