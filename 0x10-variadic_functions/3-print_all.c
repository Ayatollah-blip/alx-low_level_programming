#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
* print_all - function that prints all format arguments
*
* @format: format of argumets to be puted
*/
void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i = 0;
char *str, *sep = "";

va_start(ap, format);
if (format)
{
while (format[i])
{
	switch (format[i])
	{
		case 'c':
			printf("%s%c", sep, va_arg(ap, int));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(ap, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", sep, str);
			break;
		default:
			i++;
			continue;
	}
	sep = ", ";
	i++;
}
}
printf("\n");
va_end(ap);

}
