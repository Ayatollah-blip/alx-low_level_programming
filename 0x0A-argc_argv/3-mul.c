#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);


	return (n);

}


/**
* main - program
* Description: function that prints the number of argc
*
* @argv: vector of string of command line arguments
* @argc: integer number that count the command line arguments
*
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
int arg1, arg2, num;

arg1 = _atoi(argv[1]);
arg2 = _atoi(argv[2]);
num = arg1 *arg2;
if (argc < 3 || argc > 3)
{
	printf("Error\n");
	return (1);
}
else
{
	printf("%d\n", num);
	return (0);
}
}
