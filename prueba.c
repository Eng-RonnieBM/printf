#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...);

int main(void)
{
//    printf("%05d",156);
    _printf("Hola %s mundo", "bendito");
}

int _printf(const char *format, ...)
{
    char *character;
    char *string;
    int j = 0;
    va_list args;
    va_start(args, format);
    int i = 0;
    while (format[i] != '\0')
        {
            switch(format[i])
            {
                case '%':
                switch(format[i + 1])
                    {
			    //case 'c':
			    //write(1, va_arg(args, int*), 1);
			    //i++;
			    //break;

                        case 's':
                        string = va_arg(args, char*);
                        while (string[j] != '\0')
                            j++;
                        write(1, string, j);
                        i++;
                        break;

                    }
                break;

                default:
                write(1, format + i, 1);
            }
        i++;
        }
    va_end(args);
}
