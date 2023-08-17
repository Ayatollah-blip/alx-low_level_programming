#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_dlistint - function that free list
* Description: chakhbat lakhabit
* @head : pointer of the head of the list to be printed
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *buffer;

	while (head)
	{
		buffer = head->next;
		free(head);
		head = buffer;
	}

}
