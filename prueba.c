#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int main(void)
{
//    printf("%05d",156);
        _printf("Hola %c mundo %s.\n", 'a',"hola");
}


int _printf(const char *format, ...)
{
    int *character;
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
                            case 'c':
                            character = va_arg(args, int*);
                            //printf("%c", va_arg(args, int));
                            write(1, &character, 1);
                            i++;
                            break;

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
