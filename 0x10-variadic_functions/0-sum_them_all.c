#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - function that sums all arguments
*
* @n: number of argumets to be puted
*
* Return: sum if n > 0 else 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int sum = 0;
unsigned int i;

if (n == 0)
	return (0);

va_start(ap, n);

for (i = 0 ; i < n ; i++)
{
	sum += va_arg(ap, int);
}
va_end(ap);

return (sum);
}
