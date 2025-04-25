#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s", &s);

    int conso = strlen(s);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 97 || s[i] == 101 || s[i] == 105 || s[i] == 111 || s[i] == 117)
        {
            conso--;
        }
    }
    printf("%d", conso);
    return 0;
}