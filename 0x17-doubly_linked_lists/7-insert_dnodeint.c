#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_dnodeint_at_index  - function that return node from index
* Description: chakhbat lakhabit
* @h : pointer of the head of the list to be printed
* @idx : index to return head from
* @n : number to be added
* Return: new node or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *buffer, *buf2 = *h;
	unsigned int i = 0;

	buffer = malloc(sizeof(dlistint_t));
	buffer->prev = NULL;
	buffer->n = n;
	buffer->next = NULL;

	while (buf2)
	{
		if (i == idx)
		{
			buffer->prev = buf2->prev;
			buffer->next = buf2;
			if (buf2->next)
				buf2->prev->next = buffer;
			buf2->prev = buffer;
			return (buffer);
		}
		i++;
		buf2 = buf2->next;
	}
	return (NULL);
}
