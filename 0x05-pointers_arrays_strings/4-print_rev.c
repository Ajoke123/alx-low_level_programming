#include "main.h"

/**
 * print_rev -> printing a strimg in reverse
 * @s: the string to be printed in rev
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++
	}
	for(c -= ; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
