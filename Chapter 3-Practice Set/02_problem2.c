/*
Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user.
*/

#include <stdio.h>

int main(){
    int Maths,Phy,Chem;
    printf("Enter Marks of Maths: ");
    scanf("%d",&Maths);
    printf("Enter Marks of Phy: ");
    scanf("%d",&Phy);
    printf("Enter Marks of Chem: ");
    scanf("%d",&Chem);
    float total=(float)(Maths+Phy+Chem)/3;
    if(total>=40.0 && Maths>=33 && Phy>=33 && Chem>=33){
        printf("You are passed.");
    }
    else{
        printf("You are failed.");
    }
    return 0;
}