#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i<=n; i++)
    {
        printf("%d ", i);
        if (i%3==0 || i%5==0) printf ("Yes\n");
        else printf("No\n");
    }
    return 0;
}