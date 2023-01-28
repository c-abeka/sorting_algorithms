#include "sort.h"

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array of integers
 * @size: aray size
 *
 */
void bubble_sort(int *array, size_t size)
{
	int i, temp, len, swaps = 1;

	if (!array || size < 2)
		return;

	len = size - 1;

	for (i = 0; i < len; i++)
	{
		temp = array[i];

		if (array[i] > array[i + 1])
		{
			array[i] = array[i + 1];
			array[i + 1] = temp;
			swaps = 1;
		}

		if (i == len - 1 && swaps == 1)
			i = -1, swaps = 0, len--;
	}
}
