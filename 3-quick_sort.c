#include "sort.h"
/**
 * swap - this function uses two pointers to swap two ints.
 * @a: pointer a
 * @b: pointer b
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
 * partition -  this function partitions the array by
 * implementing the lomuto partition scheme.
 * @array: array
 * @low: low bound of the array
 * @high: high bound of the array
 * @size: size of the array
 * Return: i, the index of the pivot element
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	return (i);
}
/**
 * quicksort_recursion - this function applies the divide and conquer mechanism
 * to sort the array.
 * @array: unsorted array
 * @low: lower bound of the array
 * @high: higher bound of the array
 * @size: size of the array
 * Return: void
 */
void quicksort_recursion(int *array, int low, int high, size_t size)
{
	/* index of the pivot element.*/
	int pivot_index;

	if (low < high) /* base case */
	{
		/* first call partition to partition the array.*/
		pivot_index = partition(array, low, high, size);
		quicksort_recursion(array, low, pivot_index - 1, size);
		quicksort_recursion(array, pivot_index + 1, high, size);
	}
}
/**
 * quick_sort - this is my wrapper function.
 * It will sort an array of integers by calling quicksort_recursion.
 *
 * @array: unsorted array
 * @size: size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	quicksort_recursion(array, 0, size - 1, size);
}
