#include <stdio.h>

// Function prototype
int sum(int,int);

// Function Definition

int sum(int x, int y){
    // printf("The Sum is %d\n",x+y);
    return x+y;
}
int main(){
    int a=1;
    int b=2;

    // int c=a+b;
    int c=sum(a,b);
    printf("The sum is %d\n",c);
    return 0;
}