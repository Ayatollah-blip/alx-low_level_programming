#include "main.h"

/**
* main - main function
* Description: call a function that prints lower case alphabets
*
* Return: 0 (Success)
*/
void print_alphabet(void);
int main(void)
{
	print_alphabet();
}
void print_alphabet(void)
{
	int i;
	for(i = 97 ; i < 123 ; i++)
	{
		_putchar(i);
	}
}
