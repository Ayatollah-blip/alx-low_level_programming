#include "main.h"
/**
* more_numbers - function
* Description: function print 0 to 14 /10 times
*
*/
void more_numbers(void)
{
int i, j, k;

for (k = 0 ; k < 10 ; k++)
{
for (i = 48 ; i < 50 ; i++)
{
	for (j = 48 ; j < 58 ; j++)
	{
		if (i > 48)
			_putchar(i);
		_putchar(j);
		if (i > 48 && j > 51)
			break;
	}
	if (i > 48 && j > 51)
		break;
}
_putchar('\n');
}

}
