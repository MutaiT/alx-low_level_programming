#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_s - Typedef for struct dog
 */

typedef struct dog dog_s;

/**
 * struct dog - A struct storing some information about a dog e.g name,age
 *
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Description: A struct 'dog' storinf info of a dog e.g name,age and owner
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
