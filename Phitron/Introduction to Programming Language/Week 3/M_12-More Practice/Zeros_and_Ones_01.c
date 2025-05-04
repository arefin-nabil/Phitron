#include<stdio.h>
int main()
{
    int n, zero=0, one=0;
    scanf("%d", &n);
    int arr[n];
    for (int i =0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]==0) zero++;
        else one++;
    }
    printf("%d %d", zero, one);
    return 0;
}