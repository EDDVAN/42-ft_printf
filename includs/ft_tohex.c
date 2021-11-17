#include "ft_printf_inc.h"

char    *to_hex(unsigned long long int deci, int len)
{
    int j = len;
    char *hex = (char *)malloc(sizeof(char) * (len + 1));
    unsigned long long int mod,rest;
    mod = deci;
    
    hex[j] = '\0';
    j--;
    while (mod != 0)
    {
        rest = mod % 16;
        if (rest < 10)
            hex[j--] = 48 + rest;
        else
            hex[j--] = 87 + rest;
        mod = mod / 16;
    }
    return hex;
}