#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>

#ifndef HOLBERTON_H
#define HOLBERTON_H

typedef struct formats
{
    char *format;
    void (*func)(va_list);
} formating;

int _printf(const char *format, ...);
void _print_int(va_list arguments);

#endif /* HOLBERTON_H */

/// MAIN

int main()
{

    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    return 0;
}

////////////////////////////////////////////FUNCION _PRINTF ****************************************************************

int _printf(const char *format, ...)
{
    int i = 0, j;
    void *(__va_list_tag)r;
    va_list arg;
    format_t list[] = {
        {"d", print_i},
        {"i", print_i},
        {"s", print_s},
        {"c", print_c},
        {NULL, NULL}};
    while (format && format[i])
    {
        va_start(arg, format);
        while (format[i])
        {
            j = 0;
            if (format[i] == '%')
            {
                if (format[i + 1] == '%')
                {
                    _putchar('%');
                    i++;
                }
                while (j < 5)
                {
                    if (format[i + 1] == *list[j].type)
                        r = list[j].f;
                    j++;
                }
            }
            else if (format[i] == '\\')
            {
                if (format[i] == 'n')
                    _putchar('\n');
            }
            else
                _putchar(format[i]);
            i++;
        }
    }
    va_end(arg);
    return (0);
}

////////////////////////////////////////////IMPRIME ENTEROS ****************************************************************

int print_i(va_list i)
{
    int a[10];
    int j, m, n, sum, count;

    n = va_arg(i, int);
    count = 0;
    m = 10;
    a[0] = n / m;
    for (j = 1; j < 10; j++)
    {
        m /= 10;
        a[j] = (n / m) % 10;
    }
    if (n < 0)
    {
        _putchar('-');
        count++;
        for (j = 0; j < 10; j++)
            a[j] *= -1;
    }
    for (j = 0, sum = 0; j < 10; j++)
    {
        sum += a[j];
        if (sum != 0 || j == 9)
        {
            _putchar('0' + a[j]);
            count++;
        }
    }
    return (count);
}

////////////////////////////////////////////IMPRIME STRING ****************************************************************

void print_s(va_list s){
int count = 0;
char *str = va_arg(s, char *);
if(s == NULL)
{
  return NULL;
  }
while(str[count])
{
  _putchar(str[count]);
  count++;
  }
}

////////////////////////////////////////////IMPRIME CHAR ****************************************************************

void print_c(va_list c)
{
    char ch = (char)va_arg(c, int);
    _putchar(ch);
}