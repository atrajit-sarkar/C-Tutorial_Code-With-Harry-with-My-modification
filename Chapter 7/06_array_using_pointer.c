#include <stdio.h>

int main()
{
    int marks[] = {12, 34, 53, 66};
    // int *ptr = &marks[0];
    int *ptr = marks; // Same as int *ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        printf("The marks[%d] is %d\n",i,marks[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The marks[%d] is %d\n",i,*ptr);
        ptr++;
    }
    

    return 0;
}