#include <stdio.h>

int main(){
    // int arr[3][10];
    int mul[]={2,7,9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d X %d=%d\t",mul[i],j,mul[i]*j);
        }
        printf("\n");
    }
    
    return 0;
}