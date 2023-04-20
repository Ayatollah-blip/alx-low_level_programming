#include "3-calc.h"
/**
* main - function
*
* @argc: number of arguments passed
* @argv: argument to be treated
*
* Return: 0 if success
*/
int main(int argc, char *argv[])
{
int num1, num2;
char *pt;

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
pt = argv[2];

if (get_op_func(pt) == NULL || pt[1] != '\0')
{
	printf("Error\n");
	exit(99);
}

if ((*pt == '/' && num2 == 0) ||
	(*pt == '%' && num2 == 0))
{
	printf("Error\n");
	exit(100);
}

printf("%d\n", get_op_func(pt)(num1, num2));

return (0);
}
