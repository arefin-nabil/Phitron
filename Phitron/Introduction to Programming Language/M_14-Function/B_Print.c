#include <stdio.h>
int num(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i < n)
            printf(" ");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    num(n);
    return 0;
}