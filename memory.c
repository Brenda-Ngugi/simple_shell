#include "shell.h"

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: current pointer address
 *@old_size: allocated space for ptr
 *@new_size: size in bytes of the new memory block
 *Return: reallocated space (s)
 */
void *_realloc(void *ptr, size_t old_size, size_t new_size)
{
	char *s, *aux;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
			return (NULL);

		return (s);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	s = malloc(new_size);
	if (s == NULL)
		return (NULL);

	aux = ptr;
	for (a = 0; i < old_size; a++)
		s[i] = aux[a];

	free(ptr);

	return (s);
}
