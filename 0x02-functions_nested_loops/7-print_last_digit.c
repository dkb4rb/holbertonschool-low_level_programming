#include "holberton.h"

/**
 * function that prints the last digit of a number.
 * @brief 
 * 
 */

int print_last_digit(int d)
{
    
    d = d % 10;
    if (d < 0){

        d = (d * (-1));
    }
    
    _putchar(d + '0');
    return(d);


}