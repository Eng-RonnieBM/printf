#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_c - print a character
 *@args: arguments
 *Return: a integer
 */
int print_c(va_list args)
{
	char c;

	c = (va_arg(args, int));
	if (c == '\0')
		return (0);
	write(1, &c, sizeof(c));
	return (1);
}


/**
 *print_s - print a string
 *@args: arguments
 *Return: a integer
 */
int print_s(va_list args)
{
	char *s;
	int i;

	i = 0;
	s = va_arg(args, char *);
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		i++;
	write(1, s, i);
		return (i);
}

/**
 * print_p - print percent
 *@args: argument
 * Return: a integer
 */
int print_p(va_list args)
{
	char *p;

	p = va_arg(args, char *);
	write(1, p, sizeof(char));
		return (0);
}

/**
 * print_d - function parameter to print a digit.
 * @args: parameter to print a digit.
 * Return: returns a string.
 */
int print_d(va_list args)
{
	int d;
	char *ptr;
	int size;

	ptr = 0;

	d = (va_arg(args, int));
	ptr = itoa_p(d);
	size = _strlen(ptr);
	write(1, ptr, size);
	free(ptr);
	return (1);
}
