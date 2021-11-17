#include "ft_printf_inc.h"

char	*ft_strupper(char *s)
{
    int i;

    i = 0;
    while(s[i])
	{
        if (s[i] >= 'a' && s[i] <= 'z')
		    s[i] -= 32;
        i++;
    }
    return (s);
}