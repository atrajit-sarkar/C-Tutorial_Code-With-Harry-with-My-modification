/*
My addition and thoughts.
*/

#include <stdio.h>

void display_array(int *,int);

void display_array(int *i,int n){
    for (int j = 0; j < n; j++)
    {
        printf("A[%d]=%d\n",j,*i);
        i++;
    }
    
}
int main(){
    int array[]={10,24,34,5};
    int *ptr_array=array;
    // display_array(ptr_array,4);
    display_array(array,4);
    return 0;
}