#include <stdio.h>
int main()
{
    int n = 5;
    //scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    for (int i = n; i >= 1; i--)
    {
        printf(" ");
        for (int s = 0; s < n - i; ++s)
            printf(" ");

        for (int j = 1; j <= i - 1; j++)
        {

            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}