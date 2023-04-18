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
	int len1, len2;
	dog_t *Hmar;

	len1 = strlen(name) + 1;
	len2 = strlen(owner) + 1;
	Hmar = malloc(sizeof(dog_t));
	if (Hmar == NULL)
		return (NULL);
	(*Hmar).name = malloc(sizeof(char) * len1);
	if ((*Hmar).name == NULL)
		return (NULL);
	(*Hmar).owner = malloc(sizeof(char) * len2);
	if ((*Hmar).owner == NULL)
		return (NULL);
	strcpy((*Hmar).name, name);
	(*Hmar).age = age;
	strcpy((*Hmar).owner, owner);

return (Hmar);
}
