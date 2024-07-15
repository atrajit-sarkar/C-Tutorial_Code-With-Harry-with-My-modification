#include <stdio.h>

int main(){
    int i=1;
    int sum=0;
    // Using do while loop......
    do
    {
        sum+=i;
        i++;
    } while (i<=10);
    printf("The sum is: %d\n",sum);
    // Using for loop......
    int sum1=0;
    for ( i = 1; i <= 10; i++)
    {
        sum1+=i;
    }
    
    printf("The sum is: %d\n",sum1);
    return 0;
}