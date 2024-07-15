#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Atrajit";
    char a1[56] = "GongoBongo";
    char a2[56] = "Coding";

    printf("%d\n", strlen(st));
    char source[] = "Atrajit";
    char target[30];
    strcpy(target, source); // Target now contains source
    printf("%s %s\n", st, target);

    strcat(a1,a2);
    printf("%s %s\n",a1,a2);
    return 0;
}