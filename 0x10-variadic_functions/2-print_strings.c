#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - main entry
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list string;
char *st;
unsigned int indx;
	va_start(string, n);
	for (indx = 0; indx < n; indx++)
	{
		st = va_arg(string, char *);
		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);
		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
