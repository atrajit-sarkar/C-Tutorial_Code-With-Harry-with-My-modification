/*
What will be the output of this program:

int a = 10; 
if (a = 11) 
printf("I am 11"); 
else  
printf("I am not 11");
*/

#include <stdio.h>

int main(){
    int a=10;
    if(a=11){
        printf("I am 11");
    }
    else{
        printf("I am not 11");
    }
    return 0;
}

// The above programme will print "I am 11" as inside if statement there is a true value a=11, rather that a relational operator a==11. Hence this kind of behaviour happens.