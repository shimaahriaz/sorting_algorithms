#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 1;
	int temp, flag = 1;

	if (!array || size < 2)
		return;

	while (flag == 1)
	{
		flag = 0;
		i = 0;

		while (i < size - j)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				flag = 1;
			}
			i++;
}
		j++;
	}
}

