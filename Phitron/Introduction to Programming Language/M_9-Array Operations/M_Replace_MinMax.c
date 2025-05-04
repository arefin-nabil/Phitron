#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    int max_i = 0, min_i = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            max_i = i;
        }
        if (min > arr[i])
        {
            min = arr[i];
            min_i = i;
        }
    }
    int temp = 0;
    temp = arr[max_i];
    arr[max_i] = arr[min_i];
    arr[min_i] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}