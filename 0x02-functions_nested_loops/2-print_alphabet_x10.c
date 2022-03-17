# include "main.h"

/**
 * _print_alphabet_x10 - prints alphabeth times 10
 *
 * Return: void
 */

void _print_alphabeth_x10(void)
{
	int round = 0;
	char letter = 'a';

	while (round < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter ++;
		}
		_putchar('\n');

		round ++;
	}
}
