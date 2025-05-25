#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n][n];
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int pr = 0, sc = 0;
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if (i==j)
            {
                pr = pr + ar[i][j];
            }
        }
    }

        for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if (i+j == n-1)
            {
                sc = sc + ar[i][j];
            }
        }
    }
    printf("%d\n", abs(pr-sc));
    return 0;
}