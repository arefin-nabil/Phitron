#include <stdio.h>
int main()
{
    char s[77];
    for (int i = 0; i < 77; i++)
    {
        scanf("%s", &s[i]);
    }

    int count[200] = {0};

    for (int i = 0; i < 77; i++)
    {
        int x = s[i];
        count[x]++;
    }

    for (int i = 97; i <= 122; i++)
    {
        if (count[i]==2)
        {
            printf("%c", i);
        } else{
            continue;
        }   
    }

    return 0;
}