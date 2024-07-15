#include <stdio.h>

int main(){
    int n=0;
    int not_prime=0;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            not_prime=1;
            break;
        }
    }
    if(not_prime){
        printf("%d is not prime\n",n);
    }
    else if (n==1 || n==0)
    {
       printf("%d is neither not prime nor composite\n",n);
    }
    
    else{
        printf("%d is not prime\n",n);
    }
    
    return 0;
}