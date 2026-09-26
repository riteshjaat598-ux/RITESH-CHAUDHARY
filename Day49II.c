#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, last = 0;

    fgets(name, 100, stdin);

    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ')
        {
            last = i + 1;
        }
    }

    printf("%c.", name[0]);

    for(i = 1; i < last; i++)
    {
        if(name[i] == ' ')
        {
            printf("%c.", name[i + 1]);
        }
    }

    printf(" %s", &name[last]);

    return 0;
}