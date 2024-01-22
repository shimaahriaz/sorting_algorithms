#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */

void selection_sort(int *array, size_t size)
{
	size_t current_idx = 0, next_idx = 0, min_idx = 0;
	int temp;

	if (!array || size < 2)
		return;

	while (current_idx < size - 1)
	{
		min_idx = current_idx;
		next_idx = current_idx + 1;

		while (next_idx < size)
		{
			if (array[next_idx] < array[min_idx])
				min_idx = next_idx;
			next_idx++;
		}

		if (min_idx != current_idx)
		{
			temp = array[current_idx];
			array[current_idx] = array[min_idx];
			array[min_idx] = temp;
			print_array(array, size);
		}

		current_idx++;
	}
}

