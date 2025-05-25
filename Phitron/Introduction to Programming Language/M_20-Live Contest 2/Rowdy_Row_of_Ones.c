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
            scanf("%d ", &arr[i][j]);
        }
    }
    int count = 0;
    int row = 0;

    for (int i = 0; i < x; i++)
    {
        int counts = 0;
        
      //  printf("Row %d is: ", i);
        for (int j = 0; j < y; j++)
        {

           // printf("%d ", arr[i][j]);
            if (arr[i][j] == 1)
            {
                counts++;
            }

            if (counts > count)
            {
                count = counts;
                row = i;
            }
        }
        // printf(" row is %d", counts);
        // printf("\n");
        counts = 0;
    }

    printf("%d", row);

    return 0;
}