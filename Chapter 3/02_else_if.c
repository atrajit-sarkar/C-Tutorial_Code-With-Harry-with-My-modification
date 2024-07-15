#include <stdio.h>

int main(){
    int age=45;

    if(age>18){
        printf("You can drive");
    }
    else if(70>age>60){
        printf("you can drive and you are a senior citizen.");
    }
    else if(age>40){
        printf("You can drive and you are elder");
    }
    else{
        printf("you cannot drive");
    }
    return 0;
}