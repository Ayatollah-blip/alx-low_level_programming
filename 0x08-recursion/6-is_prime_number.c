#include "main.h"
/**
* is_prime_number - function that test if prime number
*
* @n: the number to be test if prime number.
* @i: number to start twsting from
* Return: result
*/
int prime_number(int n, int i);

int is_prime_number(int n)
{

	if (n < 0)
		return (0);
	else
		return (prime_number(n, 2)); 
}
/**
*prime_number - function that calculate the square of n base on i
*
*@n: number whom to be tested if prime number
*@i: number to start testing from
*
*Return: square of n
*/
int prime_number(int n, int i)
{
	int num = n % i;

	printf("%d\n",num);
	if (num ==  0)
		return (1);

	else if (num == n)
		return (0);
	else
		return (prime_number(n, i + 1));
}
