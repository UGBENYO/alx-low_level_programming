#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array and initializes with specific char
 * @size: size of char
 * @c: char to initialize array with
 * Return: NULL if size = 0 or
 * pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
