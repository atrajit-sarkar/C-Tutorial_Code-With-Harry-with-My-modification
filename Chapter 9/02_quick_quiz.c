#include <stdio.h>
#include <string.h>

struct employee
{
    int code;  // This declares a new user defined data types!
    float salary;
    char name[50];
}; // semicolon is important

int main(){
    struct employee e1,e2;
    // char name[50];
    printf("Code,Salary,Name= ");
    scanf("%d,%f,%s",&e1.code,&e1.salary,&e1.name);
    // strcpy(e1.name,name);

    printf("%d %f %s \n",e1.code,e1.salary,e1.name);
    return 0;
}