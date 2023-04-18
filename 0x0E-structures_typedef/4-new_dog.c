#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog struct or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, namelen = 0, ownerlen = 0;
	char *newname, *newowner;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		namelen++;
	for (i = 0; owner[i] != '\0'; i++)
		ownerlen++;
	newname = malloc((sizeof(char) * namelen) + 1);
	if (newname == NULL)
	{
		free(newname);
		return (NULL);
	}
	newowner = malloc((sizeof(char) * ownerlen) + 1);
	if (newowner == NULL)
	{
		free(newowner);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
		newname[i] = name[i];
	newname[namelen] = '\0';
	for (i = 0; i < ownerlen; i++)
		newowner[i] = owner[i];
	newowner[ownerlen] = '\0';
	dog->name = newname;
	dog->age = age;
	dog->owner = newowner;
	return (dog);
}
