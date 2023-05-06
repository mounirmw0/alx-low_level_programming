#include "main.h"
/**
 * get_bit - gets bit a index
 * @n: number to go through
 * @index: index to go through
 * Return: int value
 */
 int get_bit(unsigned long int x, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (x >> index) & 1;

	return (bit_value);
}
