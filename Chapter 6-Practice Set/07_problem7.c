#include <stdio.h>

int chng10Times(int );

int chng10Times(int n)
{
    n *= 10;
    return n;
}
int main()
{
    int n = 45;
    printf("The value of n is %d\n", n);
    chng10Times(n);
    printf("The value of n is %d\n", n);

    return 0;
}