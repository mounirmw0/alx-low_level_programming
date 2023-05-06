#include "main.h"
/**
 * clear_bit - clears index to 0
 * @n: integer to pass
 * @index: index to go to
 * Return: returns integer val
 */
 int clear_bit(unsigned long int *x, unsigned int index)
{
	if (index > 63)
		return (-1);

	*x = (~(1UL << index) & *x);
	return (1);
}
