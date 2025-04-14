#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int i;
    if (x==1) printf("-1");
    for (i = 1; i <= x; i++)
    {
        if (i % 2 == 0) printf("%u\n", i);
    }
    return 0;
}