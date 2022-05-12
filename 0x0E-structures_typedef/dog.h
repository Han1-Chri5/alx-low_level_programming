#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure holding dog's information
 * @name: dog's name int type
 * @age: dog's age int type
 * @owner: dog's owner char type
 *
 * Description - Pet dog data
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
