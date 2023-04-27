#include "lists.h"
/**
* print_list - function that prints all the elements of a list_t
*
* @h: pointer of a linked lists
*
* Return: number of elements of a list_t
*/
size_t print_list(const list_t *h)
{
size_t temp;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			temp++;
		}
	}
return (temp);
}
