#include "libft.h"
#include <stdio.h>

void    *ft_memset(void *s, int c, size_t n){
    int i;
    char *str;

    i = 0;
    str = (char *)s;
     
    while(i < n){
        str[i++] = c;
    }

    return s;

}

void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}

int main()
{
    int n = 10;
    int arr[n];

    // Fill whole array with 0.
    ft_memset(arr, 0, n*sizeof(arr[0]));
    printf("Array after memset()\n");
    printArray(arr, n);

    return 0;
}