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
    strcpy(e1.name,"Atrajit");
    e1.salary=54.44;
    e1.code=1729;

    printf("%d %f %s \n",e1.code,e1.salary,e1.name);
    return 0;
}