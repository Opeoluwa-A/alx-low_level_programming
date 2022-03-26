#include "main.h"

/**
 * print_number - function prints an integer
 * @n: input integer
 * Return: no return
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
