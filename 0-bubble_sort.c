#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using the
 * Bubble sort algorithm.
 * This function prints all steps of Sorting process.
 *
 * @array: Pointer to first element of array.
 * @size: Size of given array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			if (i != size - 1 && array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
