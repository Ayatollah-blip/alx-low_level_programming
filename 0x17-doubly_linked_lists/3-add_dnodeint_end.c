#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_dnodeint_end - function that return new list with the new node
* Description: chakhbat lakhabit
* @head : pointer of the head of the list to be printed
* @n : int number for the new node
* Return: head node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *buffer;
	dlistint_t *buf2 = *head;

	buffer = malloc(sizeof(dlistint_t));
	if (buffer == NULL)
		return (NULL);

	buffer->prev = NULL;
	buffer->n = n;
	buffer->next = NULL;

	if (*head == NULL)
	{
		*head = buffer;
		return (*head);
	}

	while (buf2->next)
	{
		buf2 = buf2->next;
	}
	buf2->next = buffer;
	buffer->prev = buf2;


	return (buffer);
}
