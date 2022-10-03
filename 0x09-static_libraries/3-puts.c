#include "main.h"
#include <stdio.h>

/**
 * _puts - 'prints string'
 * @str: 'string'
 * Return: (str)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar(*str + 0);
	str++;
	}
	putchar('\n');
}
