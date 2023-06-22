#include "function_pointers.h"
/**
 * int_index - return index place
 * @arr: array
 * @size: size of the array
 * @pls: pointer to function
 * Return: 0
 */
int int_index(int *arr, int size, int(*pls)(int))
{
	int i;

	if (arr == NULL || size <= 0 || pls == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (pls(arr[i]))
			return (i);
	}
	return (-1);
}
