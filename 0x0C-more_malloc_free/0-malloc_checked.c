#include <stdlib.h> // for malloc, free, and exit

/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(ubsigned int b)
{
	void *p = malloc(b);
	if (p == NULL) {
		free(p);
		exit(98);
	}
	return p;
}
