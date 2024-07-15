#include <stdio.h>

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("Yo enterd 1\n");
        break;
        case 2:
        printf("Yo enterd 2\n");
        break;
        case 3:
        printf("Yo enterd 3\n");
        break;
        case 4:
        printf("Yo enterd 4\n");
        break;
        default:
        printf("Nothing matched.");
    }
    return 0;
}