#include "main.h"
/**
 * print_sign: fuction to check for a sign of a number
 * @n: is the int that will be used for the argument of the funcion
 *
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else (n = 0)
	{
		_putchar('0');
		return (0);
	}
}
