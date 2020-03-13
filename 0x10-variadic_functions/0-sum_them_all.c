#include <stdarg.h>
/**
 * sum_them_all - sum all the parameter given when function is called
 * @n: number of arguments
 *
 *Return: the result of adding or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add_list;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(add_list, n);

	while (i < n)
	{
		sum += va_arg(add_list, int);
		i++;
	}
	va_end(add_list);
	return (sum);
}
