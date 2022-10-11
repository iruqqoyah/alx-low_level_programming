#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;


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


#endif
