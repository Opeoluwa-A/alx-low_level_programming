#include "main.h"

/**
 * is_palindrome - function returns the natural square root of a number
 * @s: int type
 * Return: char type
 */

int is_palindrome(char *s)
{
	int first, last;

	first = 0;
	last = _strlen_recursion(s) - 1;
	return (palindrome(s, first, last));
}

/**
 * palindrome - Entry point
 * Desc: palindrome
 * @s: char type
 * @first: int type
 * @last: int type
 * Return: Recursion
 */

int palindrome(char *s, int first, int last)
{
	if (first > last)
	{
		return (1);
	}
	else if (s[first] == s[last])
	{
		return (palindrome(s, first + 1, last - 1));
	}
	else
	return (0);
}
