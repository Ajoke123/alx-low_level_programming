#include "main.h"
#include <string.h>
/**
 * print_rev -> printing a strimg in reverse
 * @s: the string to be printed in rev
 */
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - l; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
