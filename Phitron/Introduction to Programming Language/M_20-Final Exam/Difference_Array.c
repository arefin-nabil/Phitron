#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {

        int n;
        scanf("%d", &n);
        int arrA[n], arrB[n], arrC[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d ", &arrA[i]);
            arrB[i] = arrA[i];
        }

        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arrB[i] > arrB[j])
                {
                    temp = arrB[i];
                    arrB[i] = arrB[j];
                    arrB[j] = temp;
                }
            }
          //  printf("%d ", arrB[i]);
        }
        

        for (int i = 0; i < n; i++)
        {
            arrC[i] = (arrA[i] - arrB[i]);

            printf("%d ", abs(arrC[i]));
        }
        printf("\n");
    }
    return 0;
}