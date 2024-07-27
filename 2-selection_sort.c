#include "sort.h"
/**
 * selection_sort - Algorithm implementation.
 * Sorts an array in ascending order.
 * @array: array to be sorted.
 * @size: size of @array.
 *
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, index;
	int min = 0;

	while (i < size)
	{
		index = 0;
		min = array[i];
		for (j = i; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		if (index)
		{
			array[index] = array[i];
			array[i] = min;
			print_array(array, size);
		}
		++i;
	}
}
