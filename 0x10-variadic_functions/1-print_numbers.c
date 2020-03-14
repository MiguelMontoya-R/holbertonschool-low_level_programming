#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers
 * @separator: separator between numbers
 * @n: number of numbers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
/* Declare the list*/
	va_list print_list;
	unsigned int i = 0;
/* Initialize the list*/
	va_start(print_list, n);
/* Print every element of the list*/
	while (i < n)
	{
		printf("%d", va_arg(print_list, int));

		if (*separator && i < n - 1)
		{
			printf("%c ", *separator);
		}
		i++;
	}
	printf("\n");
	va_end(print_list);
}
