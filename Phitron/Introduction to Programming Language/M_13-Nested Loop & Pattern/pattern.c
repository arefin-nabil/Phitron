#include<stdio.h>
int main()
{
    int n, s=1;
    scanf("%d", &n);
    int sp=n-1;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=sp; j++)
        {
            printf(" ");
        }
        for (int j = 1; j<=s; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
        s+=2;
        sp-=2;
    }
    return 0;
}