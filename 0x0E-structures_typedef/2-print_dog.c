#include "dog.h"
/**
* init_dog - function
* description: function that initialize a struct
*
* @d: structure
*/
void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
		printf("Name: (nil)");
	else if ((*d).owner == NULL)
		printf("Owner: (nil)");
	else if (d != NULL)
		{
		printf("Name: %s\n", (*d).name);
		printf("Age: %0.6f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
		}
}
