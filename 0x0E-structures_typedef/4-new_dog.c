#include <stdlib.h>
#include "dog.h"

/**
* _strlen - returns the length of a string.
* @s: pointer to the first address of the string.
*
* Return: length of the given string.
*/
int _strlen(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	return (strlen);
}

/**
* _strcpy - copies the string pointed to by src,
*	including the terminating null byte (\0),
*	to the buffer pointed to by dest.
* @dest: pointer to the first address of the destination string.
* @src: pointer to the first address of the source string.
*
* Return: pointer to char
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner of the dog.
 *
 * Return: pointer to dog struct.
 *	NULL if fail.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int nameLen = _strlen(name), ownerLen = _strlen(owner);

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);
	newDog->name = malloc(sizeof(char) * (nameLen + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->owner = malloc(sizeof(char) * (ownerLen + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	_strcpy(newDog->name, name);
	newDog->age = age;
	_strcpy(newDog->owner, owner);
	return (newDog);
}
