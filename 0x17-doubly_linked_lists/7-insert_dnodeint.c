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
	dlistint_t *buffer, *buf2;
	unsigned int i = 0;

	if (idx == 0)
		buffer = add_dnodeint(h, n);
	else
	{
		buf2 = *h;
		if (buf2 != NULL)
			while (!buf2->prev)
				buf2 = buf2->prev;
		while (buf2)
		{
			if (i == idx)
			{
				if (buf2->next)
				{
					buffer = malloc(sizeof(dlistint_t));
					buffer->n = n;
					buffer->prev = buf2->prev;
					buffer->next = buf2;
					buf2->prev->next = buffer;
					buf2->prev = buffer;
				}
				else
					buffer = add_dnodeint_end(h, n);
			}
			i++;
			buf2 = buf2->next;
		}
	}
	return (buffer);
}
