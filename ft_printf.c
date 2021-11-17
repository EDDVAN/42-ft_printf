#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
    va_list     args;
    int i;

    i = 0;
    va_start(args, str);
    while(str[i] != '\0')
    {
        if(str[i] != '%')
            ft_putchar_fd(str[i], 1);
        else
        {
            if(str[i + 1] == 'd' || str[i + 1] == 'i')
                ft_putnbr_fd(va_arg(args, int),1);
            else if(str[i + 1] == 'u')
                ft_putnbr_fd(va_arg(args, unsigned int), 1);
            else if(str[i + 1] == 'c')
                ft_putchar_fd(va_arg(args, int), 1);
            else if(str[i + 1] == 's')
                ft_putstr_fd(va_arg(args, char *), 1);
            else if(str[i + 1] == 'x' || str[i + 1] == 'X')
            {
                int p = va_arg(args, int);
                char    *ps = to_hex(p, (ft_intsize(p) - 1));
                if (str[i + 1] == 'X')
                    ft_putstr_fd(ft_strupper(ps), 1);
                else
                    ft_putstr_fd(ps, 1);
            }
            else if(str[i + 1] == 'p')
            {
                unsigned long long int p = va_arg(args, unsigned long long int);
                char    *ps = to_hex(p, 12);
                if(p == 0)
                    ft_putstr_fd("0x0", 1);
                else
                {
                    ft_putstr_fd("0x", 1);
                    ft_putstr_fd(ps, 1);
                }
            }
            else if(str[i + 1] == '%')
                ft_putchar_fd('%', 1);
            else
                i--;
            i++;
        }
        i++;
    }
    return 0;
} 
