#include <stdio.h>

int main(){
    int a=1; int b=1;
    printf("The vvalue of a and b is %d\n",a&&b);
    printf("The vvalue of a or b is %d\n",a||b);
    printf("The vvalue of not(a) %d\n",!a);

    if(a && b){
        printf("both are true\n");
    }
    // is same as writing......
    if(a){
        if(b){
            printf("both are true");
        }
    }
    return 0;
}