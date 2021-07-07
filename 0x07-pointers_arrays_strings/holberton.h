#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
int _putchar(char c);
void *_memset(void *s, int c, size_t n);
void *_memcpy(void *dest, const void *src, size_t n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);

#endif /*HOLBERTON_H*/