#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    // ptr[0]=1;
    // printf("%d",ptr[0]);
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = 7 * (i+1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("7X%d=%d\n", i+1, ptr[i]);
    }

    ptr = (int *)realloc(ptr, 15 * sizeof(int));

    for (int i = 0; i < 15; i++)
    {
        ptr[i] = 7 * (i+1);
    }

    for (int i = 0; i < 15; i++)
    {
        printf("7X%d=%d\n", i+1, ptr[i]);
    }

    return 0;
}