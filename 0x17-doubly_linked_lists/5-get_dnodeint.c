#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* get_dnodeint_at_index  - function that return node from index
* Description: chakhbat lakhabit
* @head : pointer of the head of the list to be printed
* @index : index to return head from
* Return: head node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *buffer;
	unsigned int i = 0;

	while (head)
	{
		buffer = head;
		if (i == index)
			return (buffer);
		i++;
		head = head->next;
	}
	return (NULL);
}
