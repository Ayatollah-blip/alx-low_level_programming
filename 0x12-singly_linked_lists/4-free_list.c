#include "lists.h"
/**
* free_list - function that frees all the elements of a list_t
*
* @head: pointer of a linked lists
*
*/
void free_list(list_t *head)
{


while (head)
{
	list_t *temp = head;
	head = head->next;
	free(temp);
}
}
