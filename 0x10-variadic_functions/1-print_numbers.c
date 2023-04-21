#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - function that prints all arguments
*
* @n: number of argumets to be puted
* @separator: constant to seperate the args while printing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

if (n == 0)
	return;

va_start(ap, n);
printf("%d", va_arg(ap, int));
for (i = 1 ; i < n ; i++)
{
	printf("%c %d", *separator, va_arg(ap, int));
}
printf("\n");
va_end(ap);

}
