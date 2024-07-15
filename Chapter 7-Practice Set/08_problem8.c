#include <stdio.h>

int main(){
    // int arr[3][10];
    int n1,n2,n3;
    printf("n1,n2,n3= ");
    scanf("%d,%d,%d",&n1,&n2,&n3);
    int mul[]={n1,n2,n3};
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