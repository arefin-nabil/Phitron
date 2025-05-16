#include <stdio.h>

void sum(int n)
{
    long long int s = 0;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        s = s + ar[i];
    }
    printf("%lld", s);
}
int main()
{
    int n;
    scanf("%d", &n);
    sum(n);
    return 0;
}