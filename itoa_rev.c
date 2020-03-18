#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * itoa_p - function to convert an integer into a string.
 * @n: integer passed into function.
 * Return: 0.
 */
char *itoa_p(int n)
{
	char *str;
	int i = 0;
	int n2;
	int bag;
	int cash;

	bag = 1;
	if (n < 0)
	{
		n2 = -n;
		bag = bag + 1;
	}
	else
		n2 = n;
	cash = n2;
	while ((cash / 10) > 0)
	{
		cash = cash / 10;
		bag = 1 + bag;
			}
	str = malloc(1 + bag * (sizeof(char)));
	if (str == NULL)
	return (NULL);
	while (bag)
	{
		str[i] = n2 % 10 + '0';
		n2 /= 10;
		i++;
		bag--;
	}
	if (n < 0)
	{
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
	rev_string(str);
	return (str);
}
/**
 * rev_string - write a function that reverses a string.
 * @s: parameter used.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int l;
	int temp;
	int x;
	int y;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	x = 0;
	y = l - 1;
	while (x < y)
	{
		temp = s[x];
		s[x] = s[y];
		s[y] = temp;
		x++;
		y--;
	}
}

/**
 * _strlen - write a function that returns the length of a string.
 * @s: string that's passed in function.
 * Return: length.
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
