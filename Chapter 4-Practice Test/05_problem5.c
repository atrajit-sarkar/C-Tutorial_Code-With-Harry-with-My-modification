#include <stdio.h>

int main(){
    int i=1;
    int sum=0;
    while (i<=10)
    {
        sum+=i;
        i++;
    }
    printf("The sum is: %d",sum);
    
    return 0;
}