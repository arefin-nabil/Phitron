#include<stdio.h>
#include<string.h>
int main()
{   
    int count = 0;
    char s[1000001];
    scanf("%s", s);
    int size = strlen(s);
    for (int i = 0 ; i<size ; i++)
    {
        count = count + (s[i]-48);
    }
    printf("%d", count);
    return 0;
}