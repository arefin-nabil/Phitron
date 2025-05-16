#include <stdio.h>

void facto(int n)
{
    long long int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%lld", fact);
}

int main()
{
    int n;
    scanf("%d", &n);
    facto(n);
    return 0;
}