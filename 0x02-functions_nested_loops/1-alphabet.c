#include "main.h"

/**
* print_alphabet -  function called to print alphabets in lower case
* Description: call a function that prints lower case alphabets
*
* Return: 0 (Success)
*/
void print_alphabet(void)
{
	int i;

	for (i = 97 ; i < 123 ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
