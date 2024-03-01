#include "sort.h"

/**
 * bubble_sort - this function sorts an unsorted integer array
 * using the bubble sort algorithm.
 * @array: pointer to an unsorted int array
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int temp;

	if (size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		for (b = 0; b < size - a - 1; b++)
		{
			/* compare adjacent elements within inner loop.*/
			if (array[b] > array[b + 1])
			{
				/* swap because they are out of order.*/
				temp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = temp;
				/* each time two elements are swapped, print the array.*/
				print_array(array, size);
			}
		}
	}
}
