#include <stdio.h>

int main()
{
    char i = 72;
    char *j = &i; // j is a pointer pointing to i (j is a character pointer)
    float k = 69.69;
    float *k1 = &k;
    printf("Address of i is %p\n", &i);
    printf("Address of i is %p\n", j);
    printf("Address of i is %p\n", &k);

    printf("the value at address j is %d\n", *j);
    printf("the value at address j is %d\n", *(&i));
    return 0;
}