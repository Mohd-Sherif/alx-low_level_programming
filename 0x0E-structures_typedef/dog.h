#ifndef DOG_H_
#define DOG_H_

/*
 * struct dog - a dog struct contains its properties.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H_ */
