#include "holberton.h"

/**
 *print_c - print a character
 *@args: arguments
 *Return: a integer
 */

int print_c(va_list args)
{
	int *letter = va_arg(args, int*);

	write(1, &letter, 1);
	return (1);
}


/**
 *print_s - print a string
 *@args: arguments
 *Return: a integer
 */

int print_s(va_list args)
{
	char *string = va_arg(args, char*);
	int j = 0;

	while (string[j] != '\0')
		j++;
	return (write(1, string, j));
}

/**
 *print_p - print percent
 *@args: arguments
 *Return: a integer
 */

int print_p(va_list args)
{
	write(1, "%", 1);
	return (1);
}
