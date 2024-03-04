#include "sort.h"
/**
 * swap - this function swaps the values of two integers using pointers.
 *
 * @a: pointer to an integer
 * @b: pointer to an int
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp;
	/**
	 * dereference the pointer, a
	 * access the value at the memory pointed to by a
	 * value is stored in temp.
	 */
	temp = *a;
	/**
	 * take the value at the memory location pointed to b
	 * and store it in the memory location pointed to by a
	 * so the value at a's location is the same as the
	 * value at b's location
	 */
	*a = *b;
	/**
	 * then we take the value stored in temp
	 * then we store it at the memory location that
	 * b points to.
	 */
	*b = temp;
}

/**
 * selection_sort - this function sorts an integer array using
 * Selection Sort Algorithm.
 *
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, minimum;
	size_t n;

	n = size;

	for (i = 0; i < n - 1; i++)
	{
		minimum = i;
		for (j = i + 1; j < n; j++)
		{
			if (array[j] < array[minimum])
			{
				minimum = j;
			}
		}
		if (minimum != i)
		{
			swap(&array[i], &array[minimum]);
			print_array(array, size);
		}
	}
}
