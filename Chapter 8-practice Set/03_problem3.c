#include <stdio.h>
int strlen(char *);

int strlen(char *str){
    int i=0;
    char c=str[i];
    while (c!='\0')
    {
        c=str[i+1];
        i++;
    }
    return i;
}
int main(){
    char str[]="Atrajit";
    
    printf("%d\n",strlen(str));
    
    return 0;
}