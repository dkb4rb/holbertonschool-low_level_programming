#include <stdio.h>
#include <stdlib.h>

void add_text(char *dest, char *src1, char *src2);
int sum_Total_Len(int s1, int s2);
int lenR(char *str, int counter);
char *string_nconcat(char *s1, char *s2, unsigned int n);

int main(void)
{
    char *concat;

    concat = string_nconcat("Holberton ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}

//// FUNCTION PRINCIPAL
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    int n1 = lenR(s1, 0);
    int n2 = lenR(s2, 0);
    int rslt = sum_Total_Len(n1, n2);
    char *buffer = (char *)malloc(sizeof(char) * (rslt + 1));
    if (buffer)
    {
        add_text(buffer, s1, s2);
        buffer[n1 + 1] = '\0';
    }
}

//LENG RECURSIVE
int lenR(char *str, int counter)
{

    if (!(*str))
    {
        return (counter);
    }
    else
    {
        return (lenR(str + 1, counter + 1));
    }
}
/// FUNCTIONS DETECT TOTAL SUM LENGS VALUES
int sum_Total_Len(int s1, int s2)
{

    int rslt = s1 + s2;

    return rslt;
}

void add_text(char *dest, char *src1, char *src2)
{

    if (!*src1 && !*src2)
    {
        ;
    }
    else
    {

        if (*src1)
        {
            *dest++ = *src1++;
        }
        else if (*src2)
        {
            *dest++ = *src2++;
        }
        add_text(dest, src1, src2);
    }
}