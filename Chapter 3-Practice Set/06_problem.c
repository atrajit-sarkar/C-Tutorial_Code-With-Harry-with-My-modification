/*
Write a program to find greatest of four numbers entered by the user. 
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[100]; // Assuming a maximum of 100 elements
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0]; // Initialize max with the first element

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
    }

    printf("The largest element in the array is: %d\n", max);
    return 0;
}
