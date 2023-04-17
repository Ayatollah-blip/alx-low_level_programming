#include "dog.h"
/**
* new_dog - function
* description: function that create a struct
*
* @name: pointer of a caracter
* @age: parameter of age
* @owner: pointer
*
* Return: return structure Hmar
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Hmar;

	Hmar = malloc(sizeof(dog_t));

	if (Hmar == NULL)
		return NULL;
	(*Hmar).name = name;
	(*Hmar).age = age;
	(*Hmar).owner = owner;

return (Hmar);
}
