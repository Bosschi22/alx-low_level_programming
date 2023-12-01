#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Entry point
* @n: The number of paramters passed to the function.
* @...: A variable number of paramters to calculate the sum of.
* Return: If n == 0 0; Otherwise - the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list cap;
unsigned int ii, sum = 0;
	va_start(cap, n);
	for (ii = 0; ii < n; ii++)
		sum += va_arg(cap, int);
	va_end(cap);
	return (sum);
}
