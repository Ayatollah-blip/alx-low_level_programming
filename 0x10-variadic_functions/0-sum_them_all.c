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
int i, sum = 0;

if (n == 0)
	return (0);

va_start(ap, n);

for (i = 0 ; i < n ; i++)
{
	sum += var_arg(ap, int);
}
var_end(ap);

return (sum);
}
