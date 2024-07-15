#include <stdio.h>

int main(){
    int cgpa[]={9,8,8}; // We can specify size of array or leave it blank also
    for (int i = 0; i < 3; i++)
    {
        printf("The value of cgpa[%d]=%d\n",i,cgpa[i]);
    }
    return 0;
}