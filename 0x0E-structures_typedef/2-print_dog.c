#include "dog.h"
/**
* init_dog - function
* description: function that initialize a struct
*
* @d: structure
*/
void print_dog(struct dog *d)
{
	struct dog my_dog = d;
	if (d == NULL)
		break;
	else if (d.name == NULL)
		printf("Name: (nil)");
	else if (d.owner == NULL)
		printf("Owner: (nil)");
	else
	printf("Name: %s\nAge: 0.6f\nOwner: %s",mydog.name,mydog.age,mydog.owner);
}
