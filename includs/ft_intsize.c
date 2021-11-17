#include "ft_printf_inc.h"

int     ft_intsize(int n)
{
    int i,x;

    i = 1;
    x = n;
    while(x > 9)
    {
        x = x / 10;
        i++;
    }
    return (i);
}