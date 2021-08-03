#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

typedef struct all_formats
{
    char *type;
    void (*f)(va_list arg);
} format_t;

void print_i(va_list);
void print_s(va_list);
void print_c(va_list);
int _printf(const char *format, ...);
int _putchar(char c);

#endif /* HOLBERTON_H */