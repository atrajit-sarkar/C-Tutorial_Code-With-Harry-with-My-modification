#include <stdio.h>

int main(){
    int a=4;
    printf("%d %d %d",a,++a,a++);
    // 6 6 4 will be the output for some complier which use right-left evaluation order
    // 4 5 5 will be the output for some complier which use left-right evaluation order 
    return 0;
}