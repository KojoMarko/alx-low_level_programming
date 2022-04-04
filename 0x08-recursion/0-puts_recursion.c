#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 *
 * @s: pointer to the string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
<<<<<<< HEAD
	_putchar(*s);
	s++;
	_puts_recursion(s);
=======

	_putchar(s[0]);
	_puts_recursion(s + 1);
>>>>>>> e2be8fca857ef34a3e00b39fbc7a979da72e902a
}
