#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this is a dog struck
 * @name:pointer
 * @age:olso pointer
 * @owner:also also pointer
 *
 * Description: just alone dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
