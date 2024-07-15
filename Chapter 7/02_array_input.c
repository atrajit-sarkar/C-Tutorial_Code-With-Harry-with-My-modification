#include <stdio.h>

int main(){
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("marks[%d]= ",i);
        scanf("%d",&marks[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks[%d]=%d\n",i,marks[i]);
    }
    
    return 0;
}