#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Atrajit.txt", "a");
    int num = 666;
    
    fprintf(ptr, "%d", num);
    fclose(ptr);

    return 0;
}
