#include "sort.h"

/**
 * selection_sort - sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: The array to be sorted
 * @size: the size of the array
 * Return: no return
 */

void selection_sort(int *array, size_t size)
{
	int min;
	size_t i;
	
	if (!array || size <= 1)
		return;

	for (i = 0; i < size; i++)
	{

