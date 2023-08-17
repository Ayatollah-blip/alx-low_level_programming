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
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t new_node = {n, NULL, NULL};
	dlistint_t *buffer;

	buffer = malloc(sizeof(dlistint_t));
	if (buffer == NULL)
		return (NULL);
	
	buffer->n = n;
	buffer -> next = *head;
	head = &buffer;
	return (*head);
}
