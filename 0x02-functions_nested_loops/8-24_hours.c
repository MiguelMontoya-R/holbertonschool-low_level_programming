#include "holberton.h"
/*
 *jack_bauer - 24 hours
 *
 *Return: no return
 */
void jack_bauer(void)
{
	int hours, minutes;
	int hours1, hours2, minutes1, minutes2;

	hours = 0;
	while (hours < 24)
	{
		minutes = 0;
		while (minutes < 60)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar('\n');

		minutes++;

		}
		hours++;

	}

}
