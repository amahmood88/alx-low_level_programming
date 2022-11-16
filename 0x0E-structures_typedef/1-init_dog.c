#include "dog.h"

/**
  * init_dog - function that initializes a variable of type struct dog
  * @d: pointer to a struct
  * @name: pointer to a char
  * @age: pointer to an int
  * @owner: pointer to a char
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
