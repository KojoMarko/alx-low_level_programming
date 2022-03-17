#include <stdio.h>

/**
 *  * main - print all fibanaccie nums starting with second 1
 *   *
 *    *
 *     *
 *      * Return: always 0
 *       * does- not exceed  4000000
 */
int main(void)
{
	long int a, b, c, d;

	a = 0;
	b = 1;
	c = 0;
	d = 0;
	while (1)
	{
		c = a + b;
		a = b;
		b = c;
		if (c > 4000000)
			break;
		if ((c % 2) == 0)
			d += c;
	}
	printf("%ld\n", d);
	return (0);
}
