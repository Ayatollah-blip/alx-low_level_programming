#include "main.h"

/**
* print_array - function
* Description: print an array
*
* @a: insert address og the array
* @n: araay length
*/

void print_array(int *a, int n)
{
int i;

printf("%d", *a);

for (i = 1 ; i < n ; i++)
{
printf(", %d", *(a + i));
}
printf("\n");
}
