#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Ij-!cbcz\"!Ipx!bsf!zpv@";
    int present = 0;
    char character;

    printf("character=\n");
    scanf("%c", &character);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == character)
        {
            present = 1;
            break;
        }
    }

    if (present == 0)
    {
        printf("%c is not present in %s\n", character, str);
    }
    else
    {
        printf("%c is  present in %s\n", character, str);
    }

    return 0;
}