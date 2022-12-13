#include "main.h"

/**
 * main - print_alphabet_x10
 *
 *  Description: function uses _putchar function to print
 *  alphabet in lowercase 10 times
 *  Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
}
