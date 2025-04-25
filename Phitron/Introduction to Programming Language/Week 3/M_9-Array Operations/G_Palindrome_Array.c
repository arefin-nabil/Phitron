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
    int count = 0;
    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        count++;
    }
    if (count >= 1)
    {
        printf("NO");
    }
    else
        printf("YES");
    return 0;
}
