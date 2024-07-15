#include <stdio.h>

int main(){
    int n,i;
    printf("Enter the value of i= ");
    scanf("%d",&n);
    i=1;
    do
    {
        printf("The value of i is %d\n",i);
        i++;
    } while (i<=n);
    
    return 0;
}