#include "sort.h"
/**
 * bubble_sort - Algorithm implementation
 * sorts an array is ascending order, prints each step.
 * @array: an array to be sorted.
 * @size: the size of @array.
 *
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int curr = 0, swap = 0, count_swaps = 0;

	while (1)
	{
		i = 0;
		count_swaps = 0;
		for (i = 0; i < size; i++)
		{
			curr = array[i];
			if (i + 1 < size)
				swap = array[i + 1];
			else
				break;
			if (curr > swap)
			{
				array[i] = swap;
				array[i + 1] = curr;
				print_array(array, size);
				count_swaps++;
				++i;
			}
		}
		if (!count_swaps)
			break;
	}
}
