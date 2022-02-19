#include "sort.h"

/**
 * insertion_array - insertion algorithm applied to an array.
 *
 * @array: array to sort with the algorithm.
 * @size: size of the array to sort.
 *
 * Return: Always void.
 */
void insertion_array(int *array, size_t size)
{
	int i, j, k;

	for (i = 0; i < (int)size; i++)
	{
		k = i;
		for (j = k - 1; j >= 0 && array[j] >= array[k];)
		{
			SWAP(array[j], array[k], int);
			j--;
			k--;
		}
	}
}
