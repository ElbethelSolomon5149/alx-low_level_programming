#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print a name using pointer to a function
 * @n: string to add
 * @f: pointer to a function
 * Return: nothing
 */
void print_name(char *n, void (*f)(char *))
{
	if (n == NULL || f == NULL)
		return;
	f(n);
}
