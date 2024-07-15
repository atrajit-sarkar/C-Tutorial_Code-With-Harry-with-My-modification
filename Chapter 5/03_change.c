#include <stdio.h>
int change(int);

int change(int a){
    a=77;
    return a;
}
int main(){
    int b=22;
    change(b);
    printf("b is %d",b);
    return 0;
}