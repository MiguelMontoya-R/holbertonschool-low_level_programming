#include <stdio.h>
#include <stdarg.h>
/**
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print_list;
	unsigned int i = 0;

	va_start(print_list, n);

	while (i < n)
	{
		printf("%d", va_arg(print_list, int));

		if (separator && i < n - 1)
		{
			printf("%c ", *separator);
		}
		i++;
	}
	printf("\n");
	va_end(print_list);
}
