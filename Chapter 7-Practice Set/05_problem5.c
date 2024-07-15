#include <stdio.h>

void printArray(int *, int);
void reverseArray(int *, int);

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
void reverseArray(int *a, int n)
{
    for (int i = n - 1; i > -1; i--)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    // reverse(arr);
    printArray(arr, 6);
    reverseArray(arr, 6);
    return 0;
}