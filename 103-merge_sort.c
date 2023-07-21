#include "sort.h"

/**
 * merge_sort - sorts an array of integers in ascending
 * order using the Merge sort algorithm
 * @array: array to be sorted
 * @size of array
 */

void merge_sort(int *array, size_t size)
{

	sort_list(array, size);
}

void sort_list(int *arr, size_t len)
{
	size_t mid = len / 2;
	int arr1[mid], arr2[len - mid];
	size_t r, l, j;

	if (len > 1)
	{
		for (l = 0; l < mid; l++)
			arr1[l] = arr[l];
		sort_list(arr1, mid);
		
		j = mid;
		for (r = 0; r < len - mid; r++)
		{
			arr2[r] = arr[j];
			j++;
		}
		sort_list(arr2, len - mid);

		merge(arr, arr1, arr2, mid, len - mid);

	}
}

void merge(int *arr, int *arr1, int *arr2, int len1, int len2)
{
	size_t l, r, nlen;

	l = r = nlen = 0;

	while (l < len1 && r < len2)
	{
		if (arr1[l] < arr2[r])
		{
			arr[nlen] = arr1[l];
			l++;
		}
		else
		{
			arr[nlen] = arr2[r];
			r++;
		}
		nlen++;
	}
	
	for (; l < len1; l++, nlen++)
		arr[nlen] = arr1[l];

	for (; r < len2; r++, nlen++)
		arr[nlen] = arr2[r];
}


