# include "main.h"

/**
 * _abs - function computes the abdolute value of a number
 *
 * @n: n is an integer
 *
 * Return: integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
