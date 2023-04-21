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


va_start(ap, n);
for (i = 0 ; i < n ; i++)
{
	printf("%d", va_arg(ap, int));
	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
}
printf("\n");
va_end(ap);

}
