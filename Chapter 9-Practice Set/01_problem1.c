#include <stdio.h>

typedef struct vector
{
    int i;
    int j;
    int k;
} vector;

int main()
{
    vector v={1,2,3};
    // v.i=1,v.j=2,v.k=3;
    printf("v=%di+%dj+%dk",v.i,v.j,v.k);
    return 0;
}