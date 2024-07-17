#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0]=1;
    printf("%d",ptr[0]);
    return 0;
}