#include "lists.h"
/**
* free_listint - finction that return a integer from linked list
*
* @head: this the linked list to be printed
*/
void free_listint(listint_t *head)
{
listint_t *node = head;

while (head)
{
node = head->next;
free(head);
head = node;
}

}

