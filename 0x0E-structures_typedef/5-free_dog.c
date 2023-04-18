#include "dog.h"
/**
* free_dog - function
* description: function that create a struct
*
* @d: pointer of a structure dog_t
*
*/
void free_dog(dog_t *d)
{
	free(d);
	free((*d).name);
	free((*d).owner);
}
