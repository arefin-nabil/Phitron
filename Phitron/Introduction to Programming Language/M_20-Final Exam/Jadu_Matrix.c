#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int arr[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    if (x == y)
    {
        int count = 0;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if (i == j || i + j == x - 1)
                {
                    // count = arr[i][j] + count;
                    // at diagonals
                    if (arr[i][j] == 1)
                    {
                        // printf("%d %d = %d\n", i, j, arr[i][j]);
                        count++;
                    }
                    else
                        count = 0;
                }
                else
                {

                    // out diagonals
                    if (arr[i][j] != 0)
                    {
                        count = 0;
                    }
                }
            }
        }
        // printf("%d ", count);
        if (x % 2 != 0)
        {
            if (count == (x + y) - 1)
            {

                printf("YES");
            }
            else if (count != (x + y) - 1)
            {
                printf("NO");
            }
        }
        else
        {
            if (count == (x + y))
            {

                printf("YES");
            }
            else if (count != (x + y))
            {
                printf("NO");
            }
        }
    }
    else
        printf("NO");

    return 0;
}