#include<stdio.h>
int main ()
{
    int n;
    scanf ("%d", &n);
    for (int i=1; i<=n; i++)
    {
        if (i%2==1) printf("%d - odd\n", i);
        else printf("%d - even\n", i);
    }
    return 0;
}