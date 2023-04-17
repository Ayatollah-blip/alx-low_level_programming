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
	dog_t myHmar;
	dog_t *Hmar;

	Hmar = &myHmar;
	(*Hmar).name = name;
	(*Hmar).age = age;
	(*Hmar).owner = owner;

return (Hmar);
}
