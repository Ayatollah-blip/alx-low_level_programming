#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* dlistint_len - function that return length of linkd list
* Description: chakhbat lakhabit
* @h : pointer of the head of the list to be printed
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
return (i);
}
