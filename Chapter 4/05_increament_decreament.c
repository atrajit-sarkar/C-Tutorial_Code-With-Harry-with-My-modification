#include <stdio.h>

int main(){
    int i=5;
    i=i+5;
    printf("The value of i is %d\n",i);
    // i++;
    // i++ prints first and then increaments (Post increament Operator)
    // ++i first increaments then print (Pre increament Operator)

    printf("The value of i is %d\n",i++);
    i+=2;// same as i=i+2
    
    return 0;
}