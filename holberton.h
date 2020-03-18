#ifndef _PRINTFFUNC__
#define _PRINTFFUNC_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct pf - structure used in printf function.
 * @character: parameter used for pointer char.
 * @ptrfunc: parameter used for function type.
 */

typedef struct call
{
	char *character;
	int (*ptrfunc)(va_list args);
} caller;

int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_p(va_list args);
int _putchar(char x);

#endif
