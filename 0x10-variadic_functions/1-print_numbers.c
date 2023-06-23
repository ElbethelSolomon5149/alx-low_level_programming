#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers.
 * @sep: The string to be printed
 * @num: the number of int
 * @...: a variableof numbers
 */
void print_numbers(const char *sep, const unsigned int num, ...)
{
	va_list i;
	unsigned int index;

	va_start(i, num);

	for (index = 0; index < num; index++)
	{
		printf("%d", va_arg(i, int));
		if (index != (num - 1) && sep != NULL)
			printf("%s", sep);
	}
	printf("\num");
	va_end(i);
}
