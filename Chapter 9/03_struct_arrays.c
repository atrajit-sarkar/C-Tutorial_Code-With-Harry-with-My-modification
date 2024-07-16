#include <stdio.h>

struct employee
{
    int code; // This declares a new user defined data types!
    float salary;
    char name[50];
}; // semicolon is important

int main()
{
    struct employee facebook[100];
    struct employee Atrajit = {172917, 1729.1729, "Atrajit Sarkar"};

    facebook[0].code = 100;
    facebook[0].salary = 100;
    facebook[1].code = 77;
    facebook[1].salary = 77;
    printf("%d %f %s\n",Atrajit.code,Atrajit.salary,Atrajit.name);

    return 0;
}