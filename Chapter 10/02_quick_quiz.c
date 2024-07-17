#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Atrajit2.txt", "r");
    if (ptr == NULL)
    {
        printf("The file doesn't exist, sorry!\n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);

        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);

        fclose(ptr);
    }

    return 0;
}