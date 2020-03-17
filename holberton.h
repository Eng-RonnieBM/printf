#ifndef _PRINTFFUNC__
#define _PRINTFFUNC_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct call
{
	char *character;
	int (*ptrfunc)();
} caller;

int print_c(va_list args);
int print_s(va_list args);
int print_p(va_list args);
int _printf(const char *format, ...);

#endif
