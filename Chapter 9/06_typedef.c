#include <stdio.h>

typedef struct complexNo
{
    float real;
    float img;
} complexNo;

int main()
{
    complexNo a;
    complexNo *ptr=&a;
    a.real=12.5;
    a.img=13.5;
    printf("The value of a=%f+i%f\n",a.real,a.img);
    printf("The value of a=%f+i%f\n",ptr->real,ptr->img);
    return 0;
}