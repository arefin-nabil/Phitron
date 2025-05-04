#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001], a[100001];
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            a[i] = s[i]+32;
        } else if (s[i] >= 97 && s[i] <= 122)
        {
            a[i] = s[i]-32;
        } else if (s[i] == 44)
        {
            a[i] = s[i]-12;
        } 
    }
    printf("%s", a);
    
    return 0;
}