#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    scanf("%s", s1);
    char s2[100];
    scanf("%s", s2);

    // int val = strcmp(s1, s2);
    // if (val<0) printf("%s", s1);
    // else if (val>0) printf("%s", s2);
    // else printf("%s", s1);

    int i = 0;

    while (1)
    {
        if (s1[i] == '\0' && s2[i]=='\0')
        {
            printf ("%s", s1);
            break;
        }
        else if (s1[i]=='\0')
        {
            printf ("%s", s1);
            break;
        }
        else if (s2[i]=='\0')
        {
            printf ("%s", s2);
            break;
        }
        else if (s1[i]==s2[i])
        {
            i++;
        }
        else if (s1[i]<s2[i])
        {
            printf ("%s", s1);
            break;
        }
        else if (s1[i]>s2[i])
        {
            printf ("%s", s2);
            break;
        }
    }
    return 0;
}