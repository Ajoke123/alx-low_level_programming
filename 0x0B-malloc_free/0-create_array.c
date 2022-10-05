#include "main.h"

/**
 * create_array -creates an array of chars
 * @size: size of the array
 * @c: character to insert
 * Return: NULL if size is zero or if it fails,pointer to array if normal
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
	return (NULL);
	}

	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
	return (NULL);
	}

	else
	{
	position = 0;
	while (position < size) /*While for array*/
	{
	*(buffer + position) = c;
	position++;
	}

	return (buffer);
	}

}
	
