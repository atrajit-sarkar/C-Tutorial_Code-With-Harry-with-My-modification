#include <stdio.h>

float average(int,int,int);
float average(int a, int b,int c){
    return (float)(a+b+c)/3;
}
int main(){
    int a=3,b=6,c=5;
    printf("The average is %f",average(a,b,c));
    return 0;
}