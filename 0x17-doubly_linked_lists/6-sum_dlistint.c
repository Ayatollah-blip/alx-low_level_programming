#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_dlistint - function that return sum of all data
* Description: chakhbat lakhabit
* @head : pointer of the head of the list to be printed
* Return: head node
*/
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
