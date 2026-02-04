#include "libft.h"
#include <stdio.h>
#include "ft_isalpha.c"
#include "ft_isdigit.c"

int     ft_isalnum(int c){
    
    if (ft_isalpha(c) || ft_isdigit(c))
        return 1;

    return 0;
}

int main(void){
    char ch = 'a';

    printf("%i", ft_isalnum(ch));
}
