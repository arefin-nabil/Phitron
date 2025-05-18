#include<stdio.h>
#include<math.h>
int main()
{
    int arr[6][6];
    for (int i = 1; i<=5; i++)
    {
        for (int j = 1; j<=5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int count = 0;
    for (int i = 1; i<=5; i++)
    {
        for (int j = 1; j<=5; j++)
        {
            if (arr[i][j] == 1)
            {
                count = abs(3-i) + abs(3-j);
            }
        }
    }

    printf("%d", count);

    return 0;
}