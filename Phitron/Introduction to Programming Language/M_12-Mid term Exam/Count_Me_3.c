#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    char s[100001];

    while (scanf("%s", &s) != EOF)
    {

        int cap = 0;
        int sml = 0;
        int dgt = 0;

        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                sml++;
            }
            if (s[i] >= 65 && s[i] <= 90)
            {
                cap++;
            }
            if (s[i] >= 48 && s[i] <= 57)
            {
                dgt++;
            }
        }
        printf("%d %d %d\n", cap, sml, dgt);
    }

    return 0;
}