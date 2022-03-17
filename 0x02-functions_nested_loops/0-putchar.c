#include "main.h"

/**
 * * main - Entry point
 * *
 * * Return: Always 0 (Success)
 */
int main(void)
{
	char arr[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int c;

	for (c = 0; c < sizeof(arr); c++)
	{
		_putchar(arr[c]);
	}
	_putchar('\n');
	return (0);
}
