#include "main.h"
/**
 * _isalpha - fuction to check c if uppercase or lowercase
 *
 * Return: (0)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
