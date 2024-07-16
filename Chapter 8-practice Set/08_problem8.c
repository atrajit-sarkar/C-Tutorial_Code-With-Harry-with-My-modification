#include <stdio.h>
#include<string.h>

int main(){
    char str[]="Ij-!cbcz\"!Ipx!bsf!zpv@";
    int count=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]=='!'){
            count++;
        }
    }
    printf("%s has %d number of %c",str,count,'!');
    return 0;
}