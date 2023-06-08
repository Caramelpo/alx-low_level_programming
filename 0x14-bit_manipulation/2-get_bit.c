#include "main.h"

/**
 * get_bit - returning the bit of a value at an index in a decimal number
 * @n: numbers to search
 * @index: indexes of the bit
 *
 * Return: values of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

