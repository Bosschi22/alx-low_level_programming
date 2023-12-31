#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Entry point.
* @separator: The str to be printed between numbers.
* @n: The number of integers passed to the function.
* @...: A variable number of numbers to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list figs;
unsigned int indx;
	va_start(figs, n);
	for (indx = 0; indx < n; indx++)
	{
		printf("%d", va_arg(figs, int));
		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
		va_end(figs);
}
