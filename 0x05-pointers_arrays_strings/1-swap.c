#include "main.h"
/**
 * swap_int - i swap test values
 * @b: integer to swap
 * @a: integer to swap
 * Return: 0
 *
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
