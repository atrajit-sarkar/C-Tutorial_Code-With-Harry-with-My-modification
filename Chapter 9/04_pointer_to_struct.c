#include <stdio.h>

struct employee
{
    int code; // This declares a new user defined data types!
    float salary;
    char name[50];
}; // semicolon is important

int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    (*ptr).code=1729;
    printf("%u\n",ptr);
    printf("%d\n",(*ptr).code);
    printf("%d\n",ptr->code); // Exactly same as (*ptr).code
    return 0;
}