#include "sort.h"

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array of integers
 * @size: aray size
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	int temp;
	bool swaps = false;

	if (array == NULL || len < 2)
		return;
	while (swaps == false)
	{
		swaps = true;

		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swaps = false;

				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				print_array(array, size);
			}
		}
		len--;
	}
}
