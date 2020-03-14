#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print a string
 * @separator: separator between strings
 * @n: number of arguments to print (strings)
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *string;
/* Initializing the string list */
	va_start(ap, n);
/* printing the list of arguments */
	while (i < n)
	{
		string = va_arg(ap, char *);
/* if *string id != NULL */
		if (*string)
		{
			printf("%s", string);
		}
		else
		{
			printf("(nil)");
		}
/* printing separator only if is != NULL and just before the last string */
		if (*separator && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
