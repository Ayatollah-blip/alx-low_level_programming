#include "dog.h"
/**
* init_dog - function
* description: function that initialize a struct
*
* @d: structure
* @name: pointer of a caracter
* @age: parameter of age
* @owner: pointer
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
