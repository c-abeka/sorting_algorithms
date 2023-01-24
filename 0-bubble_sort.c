#include "sort.h"

/**
 * swap - swaps 2 integers in an array
 * @a: first integer
 * @b: second integer
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array of integers
 * @size: aray size
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j = 0, len = size;
	bool bubble = false;

	if (array == NULL || size < 2) return;

	while (bubble == false)
	{
		bubble = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array[i], array[1 + 1]);
				while (array && j < size)
				{
					if (i > 0)
						printf(", ");
					printf("%d", array[j]);
					j++;
				}
				printf("\n");
				bubble = false
			}
		}
		len--;
	}
}
