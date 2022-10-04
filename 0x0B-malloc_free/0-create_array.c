#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an arry of size with char c
 * @size: unsigned int type
 * @c: char type
 * Return: Return pointer to array created
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
