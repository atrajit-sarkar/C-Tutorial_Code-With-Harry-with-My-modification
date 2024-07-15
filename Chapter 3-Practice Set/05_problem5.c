/*
Write a program to determine whether a character entered by the user is 
lowercase or not.

Link of the Ascii Table: https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
*/
#include <stdio.h>

int main(){
    char ch;
    printf("Enter your character: ");
    scanf("%c",&ch);
    printf("The charater is %c\n",ch);
    printf("The value of charater is %d\n",ch);
    // 97,122
    if(ch>=97 && ch<=122){
        printf("The character \"%c\"is in lower case\n",ch);

    }
    else{
        printf("The character \"%c\"is in UPPER case\n",ch);
    }
    return 0;
}