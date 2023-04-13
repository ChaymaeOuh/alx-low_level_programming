#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimentional array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: the pointer of the array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
int **p;
int x, y;

if (width <= 0 || height <= 0)
return (NULL);
p = malloc(sizeof(int *) * height);

if (p == NULL)
return (NULL);

for (x = 0; x < height; x++)
{
p[x] = malloc(sizeof(int) * width);

if (p[x] == NULL)
{
for (; x >= 0; x--)
free(p[x]);

free(p);
return (NULL);
}
}

for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
{
p[x][y] = 0;
}

return (p);
}
}

