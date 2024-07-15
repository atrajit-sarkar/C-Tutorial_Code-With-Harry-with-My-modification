#include <stdio.h>

int main(){
    int r,h;
    printf("Enter your radius: ");
    scanf("%d",&r);
    // printf("The area of the circle is: %f",3.14*r*r);
    printf("Enter your heigth: ");
    scanf("%d",&h);
    printf("The area of the circle is: %f",3.14*r*r*h);
    return 0;
}