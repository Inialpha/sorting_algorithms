#include "sort.h"

/**
 * radix_sort - aunction that sorts an array of integers
 * in ascending order using the Radix sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */

void radix_sort(int *array, size_t size)
{
	int max, exp;
	int *output = malloc(size * sizeof(int));

	max = findMax(array, size);

	for (exp = 1; exp / max > 0; max *= 10)
		countingSort(arr, size, exp, output);
}


void countingSort(int arr, size_t, size, int exp, int *output)
{
	size_t i;
	int count[10] = {0};

	for (i = 0; i < size; i++)
		count[(arr[i] / exp) % 10]++;

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];
	
	for (i = 0; i < size; i++)
		output[count[


}

int findMax(int *arr, size_t size)
{
	int i, max = arr[0];

	for (i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return (max);
}
