#ifndef LIST_H
#define LIST_H
#include <stddef.h>
typedef struct list_t
{
    char *str;
    unsigned int len;
    struct list_t *next;

} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /* LIST_H */