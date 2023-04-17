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
	else 
		printf("Name: %s\n", (*d).name);
	if ((*d).age < 0)
		printf("Age: (nil)");
	else
		printf("Age: %0.6f\n", (*d).age);
	if ((*d).owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", (*d).owner);
}
