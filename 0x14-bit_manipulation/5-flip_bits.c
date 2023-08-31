#include "main.h"

/**
 * @m: 2nd digit
 * @n: 1st digit
 * flip_bits - sum of bits to be changed
 * to get from one number to another
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

