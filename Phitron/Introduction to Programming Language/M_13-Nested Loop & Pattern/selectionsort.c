#include <stdio.h>
int main()
{
    // int n;
    // scanf("%d", &n);
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    // int temp = 0;
    // for (int i = 0; i < n ; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {

    //         if (arr[i] > arr[j])
    //         {
    //             temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    //     printf("%d ", arr[i]);
    // }

    for (int i = 3; i>=1; i--)
    {
        for (int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf(" ");
    }
    return 0;
}