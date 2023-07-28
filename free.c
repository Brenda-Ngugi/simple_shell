#include "shell.h"

/**
 *free_pointer - Free a (single) pointer allocated memory
 *@ptr: Pointer to free
 *Return: Nothing
 **/
void free_pointer(void *ptr)
{
	if (ptr != NULL)
	{
		free(ptr);
		ptr = NULL;
	}

	ptr = NULL;
}

/**
 * free_memory_pp - Free a double pointer allocated mem space
 *@ptr: Double pointer to free
 *Return: Nothing
 **/
void free_memory_pp(void **ptr)
{
	void **temp;

	for (temp = ptr; *temp != NULL; temp++)
		free_memory_p(*temp);

	free_memory_p(ptr);
}
