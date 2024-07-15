#include <stdio.h>

int main(){
    int a=5,b=69;
    float c=69.69;
    char d='X';
    float *ptr_c=&c;
    char *ptr_d=&d;
    printf("The address of a is %u\n",&a);
    printf("The address of b is %u\n",&b);
    printf("The address of c is %u\n",ptr_c);
    ptr_c++;
    printf("The address of c is %u\n",ptr_c);
    printf("The address of d is %u\n",&d);
    ptr_d++;
    printf("The address of d is %u\n",ptr_d);
    return 0;
}