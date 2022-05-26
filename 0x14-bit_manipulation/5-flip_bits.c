#include "main.h"
/**
 * flip_bits - # of bits you would need to flip to get fr one # to another
 * @n: takes in an integer
 * @m: takes in the 2nd integer to compare
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
