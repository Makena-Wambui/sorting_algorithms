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

2. Write a function that sorts a doubly linked list of integers in ascending order using the
Insertion sort algorithm
● Prototype: void insertion_sort_list(listint_t **list);
● You are not allowed to modify the integer n of a node. You have to swap the nodes
themselves.
● You’re expected to print the list after each time you swap two elements

3. Selection Sort
Suppose you have an unsorted array, arr.
arr has 6 elements
Subdivided into two subarrays: sorted and unsorted
Same as Insertion Sort
Initially the sorted subarray is empty unlike in Insertion Sort.
From the Unsorted sublist, we find the minimum element.
Then swap it with the element at the beginning of the unsorted subarray.
Repeatedly do this with n-1 passes, just like in Bubble Sort.

4. QUICK SORT ALGORITHM
LOMUTO PARTITION SCHEME
Partitioning scheme was named after Nico Lomuto,
who is a Computer Scientist known for his work on the Ada Programming Language.
In Lomuto Partition Scheme, the last element is always chosen as the Pivot element.
The algorithm mantains two pointers i and j, which scan thro the array.
If element at j is less than or equal to the pivot, i is incremented
then elements at i and j are swapped.
Process continues until the entire array has been scanned
Pivot is then swapped with elemnt at i+1

