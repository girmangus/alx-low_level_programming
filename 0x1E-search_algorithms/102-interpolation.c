#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of
 *                        integers using the Interpolation search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: The first index where @value is located. -1 Otherwise.
 */


int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1, low = 0, pos = 0;

	if (array)
	{
		while (array[low] != array[high])
		{
			pos = low + (((double)(high - low)
				      / (array[high] - array[low]))
				     * (value - array[low]));
			if (pos < low || pos > high)
			{
				printf("Value checked array[%lu] is out of range\n", pos);
				break;
			}
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				low = pos + 1;
			else if (array[pos] > value)
				high = pos - 1;
			else
				return (pos);
		}
	}
	return (-1);
}