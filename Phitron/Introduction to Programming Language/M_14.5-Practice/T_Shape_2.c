#include<stdio.h>
int main()
{
    int n, st=1;
    scanf("%d", &n);
    for (int i = 1; i<=n; i++)
    {

        for (int k = n-1; k>=i; k--)
        {
            printf(" ");
        }
        for (int j=1; j<=st; j++)
        {
            printf("*");
            
        }
        st+=2;
        printf("\n");
    }
    return 0;
}