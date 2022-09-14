#include "main.h"
/**
 * print_alphabet_x10 - function to print alphabet
 *
 * Return: (0)
 */
void print_alphabet_x10(void)
{
	char alphabet, g;

	for (g = 0; g <= 9; g++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}

