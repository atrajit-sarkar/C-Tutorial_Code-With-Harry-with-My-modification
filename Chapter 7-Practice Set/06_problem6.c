#include <stdio.h>

int count(int *,int);

int count(int *A,int n){
    int no_of_positive=0;
    for (int i = 0; i < n; i++)
    {
        if(A[i]>0){
            no_of_positive++;
        }
    }
    return no_of_positive;
}
int main()
{
    int a[] = {1, 2, 3, -4, 5, 6, -7, 8, -9, -10};
    int *ptr=a;
    printf("The number of positive integers is %d\n",count(a,10));
    return 0;
}