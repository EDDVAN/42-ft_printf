#include "ft_printf.h"
#include <stdio.h>


int main(void)
{
    int x = 2;
    unsigned int d = 54562135;
    char *s = "STRING";
    void *p;
    ft_printf("%%abcd\n%d,\n%s,\n%c\n%p\n%u\n%X\n\n", 5, s, 'Y', &d, d, d);
    printf("%%abcd\n%d,\n%s,\n%c\n%p\n%u\n%X\n", 5, s, 'Y', &d, d, d);
}