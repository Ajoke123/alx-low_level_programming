#include "main.h"

/**
 * print_rev -> printing a string in reverse
 * @s: the string to be printed in reverse
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)

	for (--i; i >= 0; i--)

		putchar(s[i]);
		putchar('\n');
}
