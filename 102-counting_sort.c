#include "sort.h"
#include <stdlib.h>

/**
 * counting_sort - Sort an array of integers in ascending order
 *                 using the counting sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the counting array after setting it up.
 */
void counting_sort(int *array, size_t size)
{
	size_t i;
	int *count = NULL;
	int *sorted = NULL;
	size_t max = array[0];

	if (array == NULL || size < 2)
		return;
    
	for (i = 0; i < size; i++)
	{
		if (array[i] >= max)
		max = array[i];
	}
    
	count = malloc(sizeof(int) * (max + 1));
	sorted = malloc(sizeof(int) * size);
    
	if (count == NULL || sorted == NULL)
	{
		free(count);
		free(sorted);
		return;
	}
    
	for (i = 0; i <= max; i++)
		count[i] = 0;
    
	for (i = 0; i < size; i++)
		count[array[i]]++;
    
	for (i = 1; i <= max; i++)
		count[i] += count[i - 1];

	print_array(count, max + 1);

	for (i = 0; i < size; i++) 
	{
		sorted[count[array[i]] - 1] = array[i];
		count[array[i]]--;
	}
    
	for (i = 0; i < size; i++)
	{
		array[i] = sorted[i];
	}
    
	free(count);
	free(sorted);
}
