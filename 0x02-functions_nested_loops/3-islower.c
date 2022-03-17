# include "main.h"

/**
 *_islower - function checks for lowercase
 *
 *c: c is an ASCII cahracter
 *
 *Return: 1 if lower
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
