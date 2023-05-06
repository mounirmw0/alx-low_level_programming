#include "main.h"
/**
 * set_bit - sets a bit
 * @n: integer to grab 
 *
 */
 int set_bit(unsigned long int *x, unsigned int index)
{
	if (index > 63)
		return (-1);

	*x = ((1UL << index) | *x);
	return (1);
}
