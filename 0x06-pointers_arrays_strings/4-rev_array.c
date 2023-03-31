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
int i = 0;
int constVar;

while (i < n)
{
	n--;
	constVar = *(a + i);
	*(a + i) = *(a + n);
	*(a + n) = constVar;
	i++;
}
n = n + i;
}
