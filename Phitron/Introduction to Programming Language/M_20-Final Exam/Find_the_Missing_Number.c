#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i<t; i++)
    {
        long long int m, a, b, c, tnum, fnum;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        tnum = a*b*c;
        //printf ("%lld\n", tnum);
        if (m%tnum == 0)
        {
            fnum = m/tnum;
            printf("%lld\n", fnum);
        }
        else printf("-1\n");
    }
    return 0;
}