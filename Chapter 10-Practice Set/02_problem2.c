#include <stdio.h>

int main()
{
    FILE *ptr;
    int n;
    printf("Enter n= ");
    scanf("%d",&n);
    ptr = fopen("Table.txt", "w");
    // char str[69];

    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr,"%s","The value of ");
        fprintf(ptr,"%d",n);
        fprintf(ptr,"%c",'X');
        fprintf(ptr,"%d",i);
        fprintf(ptr,"%c",'=');
        fprintf(ptr,"%d",n*i);
        fprintf(ptr,"%c",'\n');
    }
    fclose(ptr);
    
    return 0;
}