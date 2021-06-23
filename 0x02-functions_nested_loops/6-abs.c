 #include "holberton.h"
/**
 * int _abs -
 * @brief 
 * 
 */

int _abs(int r)
{
if (r > 0 ){
    return(r);
}else
{
    r = (r * (-1));
    return(r);
}
}