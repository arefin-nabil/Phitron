#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1, s = n/2;
    for(int i = 1; i<= 6+s; i++ )
    {
        for (int k = (6+s)-1; k>=i; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
            
        }
        star+=2;
        printf("\n");
    }

    for (int i = 0; i<5; i++)
    {
        printf("     ");
        for (int j = 0; j<n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}