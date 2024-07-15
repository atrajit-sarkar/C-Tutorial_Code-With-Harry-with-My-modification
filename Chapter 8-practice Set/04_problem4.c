#include <stdio.h>
char *slice(char *, int, int);

char *slice(char *str, int m, int n)
{
    int i = 0;
    char *ptr1 = &str[m];
    char *ptr2 = &str[n+1];

    str=ptr1;
    *ptr2='\0';

    return str;
}
int main()
{
    char str[] = "Atrajit Sarkar";

    printf("%s\n", slice(str, 1, 10));

    return 0;
}