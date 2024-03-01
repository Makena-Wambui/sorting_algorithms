1. BUBBLE SORT ALGORITHM
Write a function that sorts an array of integers in ascending order using the Bubble sort
algorithm

You’re expected to print the array after each time you swap two elements.
* A list/array does not need to be sorted if its size is less than 2
* We will use the bubble sort algorithm to sort the array from smallest element to largest element. 

Bubble sort works by:
Repeatedly stepping through the list, comparing adjacent elements, and swapping them if they are in the wrong order

It utilizes nested loops to traverse the array and perform comparisons.
The outer loop is controlled by the variable a
It iterates over the entire array except for the last element.

The inner loop, controlled by the variable b, will iterate over the unsorted
portion of the array, up to size - a - 1,
where a represents the number of elements that have been sorted in the previous passes.

In each iteration of the outer loop, the largest unsorted element "bubbles up" to its correct position at the end of the array.

Best Case: 
Array is already sorted or nearly sorted.
Algorithm will perform a single pass through the array, WITH NO SWAPS BUT N-1 COMPARISONS
O(n) wher n is the number of elements.

Worst Case:
o(n^2)
The array is sorted in reverse order


