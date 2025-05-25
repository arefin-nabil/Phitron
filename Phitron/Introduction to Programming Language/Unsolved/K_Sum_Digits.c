#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int arr[n];
    for (int i = 0; i < n ; i++)
    {
        scanf("%d", &arr[i]);
        //sum = sum + arr[i];
        printf("%d ", arr[i]);
    }
    //printf("%d", sum);

    return 0;
}