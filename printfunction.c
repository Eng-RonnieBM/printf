#include "holberton.h"

/**
*_printf - print all types
*@format: pointer to a string
*Return: an integer
*/

int _printf(const char *format, ...)
{
	int i = 0, j = 0, k = 0;
	va_list args;
	caller functions[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_p},
		};
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case '%':
			j = 0;
			while (j < 3)
			{
				if (format[i + 1] == *functions[j].character)
				{
					k += functions[j].ptrfunc(args);
					i++;
					break;
				}
				j++;
			}
			break;

		default:
			write(1, format + i, 1);
			k++;
		}
		i++;
	}
	va_end(args);
	return (k);
}
