#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from input to 98, in order separate
 * by a comma then a space
 * @n: the number to begin counting with
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n = n; n < 98; n++)
		printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
		printf("%d, ", n);
		printf("%d\n", 98);
	}
}
