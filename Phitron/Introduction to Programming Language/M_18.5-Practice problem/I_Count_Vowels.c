#include <stdio.h>
#include <string.h>

void vwl(char s[201])
{
    int vowel = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
            s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowel++;
        }
    }
    printf("%d ", vowel);
}

int main()
{
    char s[201];
    gets(s);

    vwl(s);
    return 0;
}