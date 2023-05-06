#include "main.h"
/**
 * print_binary - print binary
 * @n: integer to mess with
 */
 void print_binary(unsigned long int x)
{
	int i, count = 0;
	unsigned long int current_no;

	for (i = 63; i >= 0; i--)
	{
		current_no = x >> i;

		if (current_no & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
