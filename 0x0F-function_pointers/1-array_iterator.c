#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element on a new line
 * @array: array
 * @size: how many elements to print
 * @action: pointer t print regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if  (array == NULL || action == NULL)
		return;
	i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
