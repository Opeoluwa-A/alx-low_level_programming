# include "main.h"

/**
 *_isalpha - function checks for characters that are only alphabets
 *
 *@c: is an ASCII character
 *
 *Return: 1 (if letter)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
