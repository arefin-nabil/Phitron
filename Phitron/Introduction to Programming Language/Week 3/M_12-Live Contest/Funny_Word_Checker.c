#include<stdio.h>
#include<string.h>
int main()
{
    char s1, s2;
    char a[101];
    scanf("%s", a);
    for (int i = 0; i<strlen(a) ; i++)
    {
        s1 = a[i];
    }
    for (int j = strlen(a); j>=0 ; j--)
    {
        s2 = a[j];
    }
    if (s1==s2) printf("Yes");
    else printf("No");
    return 0;
}