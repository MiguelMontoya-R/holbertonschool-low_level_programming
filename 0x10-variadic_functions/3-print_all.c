#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print all types of variables.
 * @format: format or type of the incoming character.
 * Description: Must get first lenght and then with that I stop the comma at
 * the end of the string, also we create a comma flag to make print the comma
 * only when its match a case inside the switch statement.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	int n = 0, m = 0, comma = 0;

	va_start(ap, format);
	while (format[m])
		m++;
	while (format[n])
	{
		switch (format[n])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			s = va_arg(ap, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		default:
			comma = 1;
			break;
		}
		if (n < m - 1 && comma != 1)
			printf(", ");
		comma = 0;
		n++;
	}
	printf("\n");
	va_end(ap);
}
