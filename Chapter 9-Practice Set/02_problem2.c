#include <stdio.h>

typedef struct vector
{
    int i;
    int j;
    int k;
} vector;

vector sumVec(vector, vector);

vector sumVec(vector v1, vector v2)
{
    vector sum = {v1.i + v2.i, v1.j + v2.j, v1.k + v2.k};
    return sum;
}


int main()
{
    vector v1 = {1, 2, 3}, v2 = {2, 3, 4};
    vector sum = sumVec(v1, v2);
    printf("The sum is %di+%dj+%dk\n", sum.i, sum.j, sum.k);
    return 0;
}