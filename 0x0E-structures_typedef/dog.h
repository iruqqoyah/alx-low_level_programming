#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef for struct dog
 */


/**
 * struct dog - entry point
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 * Description: nothing
 */

typedef struct dog
{
	char* name;
	float age;
	char* owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
