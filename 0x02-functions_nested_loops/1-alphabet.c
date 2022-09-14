#include "main.h"
/**
 * print_alphabet - function to print abc
 *
 * Return: Always 0 (Success/correct)
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);

}
