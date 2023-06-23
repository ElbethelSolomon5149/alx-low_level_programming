#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - calculate the sum of its parameters.
 * @num: The number of parameters passed to the function.
 * @...: A variable number of parameters.
 * Return: the sum of the parameters.
 */
int sum_them_all(const unsigned int num, ...)
{
	va_list li;
	unsigned int i, sum = 0;

	va_start(li, num);

	for (i = 0; i < num; i++)
		sum += va_arg(li, int);
	va_end(li);
	return (sum);
}
