#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x, y=0;
    scanf("%d", &x);
    for (int i =0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            int sum = arr[i]+arr[j];
            printf("%d + %d = %d\n", arr[i], arr[j], sum );
            if (sum==x)
            y++;
        }
    }
    if (y>0) printf("Yes");
    else printf("No");
    return 0;
}