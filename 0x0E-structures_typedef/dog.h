#ifndef _DOG_H_
#define _DOG_H_


/**
 * struct dog - entry point
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 * Description: nothing
 */

struct dog
{
	char* name;
	float age;
	char* owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print-dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d)


#endif
