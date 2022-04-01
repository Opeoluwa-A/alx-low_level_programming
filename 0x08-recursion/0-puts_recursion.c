#include "main.h"

/**
 * _puts_recursion - function prints a string
 * with recursion
 * Desc: _memset
 * @s: char type
 * Return: char type
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	_putchar(*s);
	_puts_recursion(s + 1);
}
