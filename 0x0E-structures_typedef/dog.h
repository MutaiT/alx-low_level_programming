#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog-s - Typedef for struct dog
 */

typedef struct dog dog_s;

/**
 * struct dog - A structure that stores some information about a dog e.g name,age,owner
 *
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Description: A structure called dog that stores the name and age of a dog and the name of its owner
 */

struct dog 
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_s *new_dog(char *name, float age, char *owner);
void free_dog(dog_s *d);

#endif
