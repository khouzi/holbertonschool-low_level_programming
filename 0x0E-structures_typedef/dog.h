#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the name of the owner
 *
 * Description: dog struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

struct dog *doggy(char *name, float *age, char *owner)
{
	struct dog *dog;

	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return dog;
}
