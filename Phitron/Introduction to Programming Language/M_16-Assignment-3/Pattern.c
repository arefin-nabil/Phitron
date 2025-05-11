#include <stdio.h>
int main()
{
    int n, h = 0;
    ;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int k = n - 1; k > i; k--)
        {
            printf(" ");
        }
        for (int j = 0; j <= h; j++)
        {
            if (i % 2 == 0)
                printf("#");
            else
                printf("-");
        }
        h += 2;
        printf("\n");
    }
    int m = (n * 2) - 2;
    for (int i = n; i >= 1; i--)
    {
        for (int k = n; k >= i; k--)
        {
            printf(" ");
        }
        for (int j = m; j > 1; j--)
        {
            if (i % 2 == 1)
                printf("-");
            else
                printf("#");
        }
        m -= 2;
        printf("\n");
    }
    return 0;
}
