#include <stdio.h>

int main(){
    int i=2;
    int *ptr=&i;
    int **ptr1=&ptr;
    printf("The address of i is %u\n",&i);
    printf("The value of i is %d\n",*ptr);
    printf("The value of i is %d\n",**ptr1);
    return 0;
}