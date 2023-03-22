#include <stdio.h>
#include "main.h"
/**
  *positive_or_negative - A function that check if n positif, negative , or zero
  *Dscription : bablabl
  *Return: 0 (Success)
  */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
