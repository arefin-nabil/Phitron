#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int sum2 = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]>0)
        {
            sum = sum+arr[i];
        }
        if (arr[i]<0)
        {
            sum2 = sum2+arr[i];
        }
    }
    printf("%d ", sum);
    printf("%d ", sum2);
    return 0;
}