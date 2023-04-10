#include<stdio.h>
/**
* *_atoi - function
* Description: convert a string to a int
*
* @s: parameter that her value to be converted
*
* Return:  sum of the string to be printed
*/

int _atoi(char *s)
{
int sum = 0, i = 1;

while (*s != '\0')
{
	if (*s == 45)
		i = i * -1;
	else if (*s == 43)
		i = i * 1;
	else
		i = i;

	if (*s < 58 && *s > 47)
	{
		if (i < 0)
		{
			sum = i * (sum * 10 + (*s - 48));
			i = 1;
		}
		else
			sum = i * (sum * 10 + (*s - 48));
	}
	s++;
}


return (sum);
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
num = arg1 * arg2;
(void) argc;
if (argv[1] != NULL && argv[2] != NULL)
{
	printf("%d\n", num);
	return (0);
}
else
{
	printf("Error\n");
	return (1);
}

}
