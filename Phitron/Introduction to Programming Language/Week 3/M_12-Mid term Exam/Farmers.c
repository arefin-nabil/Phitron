#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int m1, m2, d, m, d2, ans; 
    for (int i = 1; i<=t; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d) != EOF;
        m = m1+m2;
        d2 = (m1*d)/m;
        ans = d-d2;
        printf("%d\n", ans);
    }
    return 0;
}