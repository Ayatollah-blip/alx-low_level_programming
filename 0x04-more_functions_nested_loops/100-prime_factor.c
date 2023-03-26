#include "main.h"
/**
* main - function
* Description: function that draw a square
*
* Return:  0 (Success)
*
*/
int main(void)
{
long long  u, primeFactor, n, r;
int i, j;

primeFactor = 0;
n = 612852475143;
for (i = 2 ; i <= n ; i++)
{
	u = n % i;
	r = n/i;
	if (u == 0)
		for (j = 2 ; j < i ; j++)
			if ((r % j) == 0)
				primeFactor = r/j;
			else
				primeFactor = r;
}

printf("%d\n",primeFactor);
return (0);
}







