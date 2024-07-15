#include <stdio.h>

int *sum(int, int);
int *sum1(int, int);
float *avg(int, int);

int *sum(int a, int b)
{
    int s = a + b;
    int *ptr = &s;
    printf("The sum is %d\n", s);
    return ptr;
}

int *sum1(int a, int b)
{
    int s = a + b;
    // int *ptr = &s;
    printf("The sum is %d\n", s);
    return &s;
}
float *avg(int a, int b)
{
    float average = (a + b) / 2.0;
    float *ptr = &average;
    printf("The average is %f\n", average);
    return ptr;
}
int main()
{
    int x = 4, y = 6;
    int *ptr1;
    float *ptr2;
    int *ptr3;

    ptr1 = sum(x, y);
    ptr2 = avg(x, y);
    ptr3 = sum1(x, y);

    printf("The address of sum is %u and avg is %u\n and that of sum1 is %u\n", ptr1, ptr2,ptr3);
    return 0;
}