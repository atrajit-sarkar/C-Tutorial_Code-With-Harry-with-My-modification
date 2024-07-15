#include <stdio.h>

int main()
{
    int n;
    printf("n= \n");
    scanf("%d", &n);
    for (int i = 10; i; i--)
    {
        printf("%d X %d=%d\n", n, i, n * i);
    }

    return 0;
}