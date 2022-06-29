# ifndef DOG_H
# define DOG_H

/**
 * struct dog - structure of element dog
 * @name: dog name char.
 * @age: dog age int.
 * @owner: dog owner char.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
