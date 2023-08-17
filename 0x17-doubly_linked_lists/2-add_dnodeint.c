#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_dnodeint - function that return new list with the new node
* Description: chakhbat lakhabit
* @head : pointer of the head of the list to be printed
* @n : int number for the new node
* Return: head node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *buffer;

	buffer = malloc(sizeof(dlistint_t));
	if (buffer == NULL)
		return (NULL);

	buffer -> prev = NULL;
	buffer -> n = n;
	buffer -> next = *head;

	if (*head == NULL)
	{
		*head = buffer;
		return(*head);
	}

	(*head)->prev = buffer;
	*head = (*head)->prev;

	return (*head);
}
