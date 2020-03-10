#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct of dog Django
 * @name: name of the dog
 * @owner: dog's owner
 * @age: dog's age
 * struct for dog info
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
