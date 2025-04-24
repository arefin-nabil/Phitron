#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    scanf("%s", &a);
    char b[101];
    scanf("%s", &b);

    printf("%d %d\n", strlen(a), strlen(b));
    printf("%s\n", strcat(a, b));

    
    char temp;

    temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s", a, b);

    return 0;
}