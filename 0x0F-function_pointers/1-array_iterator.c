#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element
 * @arr: array
 * @size: how many elements
 * @action: pointerto print
 * Return: void
 */
void array_iterator(int *arr, size_t size, void (*action)(int))
{
	unsigned int i;

	if (arr == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(arr[i]);
	}
}
