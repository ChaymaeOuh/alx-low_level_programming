#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's info
 * @name: first mmber
 * @age: second member
 * @owner: third member
 *
 * Description: longer description
 */

struct dog
{
char *name;
float age;
char *owner
};

/**
 * dog_h - typedef for struct dog
 */
typedef struct dog dog_h;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_h *new_dog(char *name, float age, char *owner);
void free(dog_h *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* struct dog */

