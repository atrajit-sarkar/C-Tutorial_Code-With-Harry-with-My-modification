#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int *ptr;
    printf("n= ");
    scanf("%d", &n);
    // int arr[n];
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d]= ",i);
        scanf("%d",&ptr[i]);
        // ptr++;
    }

    free(ptr);
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",ptr[i]);
        // scanf("%d",&(*ptr));
        // ptr++;
    }
    return 0;
}