#include<stdio.h>
int main()
{
    double r, area;
    scanf("%lf", &r);
    double pie = 3.141592653;
    area = pie*(r*r);
    printf("%.9lf", area);
    return 0;
}