#include "holberton.h"

/**
 * _printf - print all types
 * @format: pointer to a string
 * Return: an integer
 */
int _printf(const char *format, ...)
{
	caller functions[] = {
		{"c", print_c}, {"s", print_s},
		{"%", print_p}, {NULL, NULL}
		};
	va_list args;
	unsigned int i = 0;
	unsigned int j = 0;
	int k;

	va_start(args, format);
	k = 0;

	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (functions[j].character != NULL)
			{
				if (format[i + 1] == *(functions[j].character))
				{
					k += (functions[j].ptrfunc(args));
					i += 1;
					break;
				}
				else
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			num_printed += 1;
		}
		i++;
	}
	va_end(args);
	return (k);
}
