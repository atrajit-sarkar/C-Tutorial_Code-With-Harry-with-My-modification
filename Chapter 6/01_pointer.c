#include <stdio.h>

int main()
{
    int i = 72;
    int *j = &i; // j is a pointer pointing to i (j is a integer pointer)
    int k = 69;
    printf("Address of i is %p\n", &i);
    printf("Address of i is %p\n", j);
    printf("Address of i is %p\n", &k);

    printf("the value at address j is %d\n", *j);
    printf("the value at address j is %d\n", *(&i));
    return 0;
}