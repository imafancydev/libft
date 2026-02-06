#include "libft.h"
#include <stdio.h>

void    *ft_memset(void *s, int c, size_t n){
    size_t  i;
    char    *str;

    i = 0;
    str = (char *)s;
     
    while(i < n)
        str[i++] = c;

    return (void * )s;
}